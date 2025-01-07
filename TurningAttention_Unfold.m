%% Turning Attention MoBI-Pipeline
% Developed and written by Zak Djebbara 2025.
% Find the VR experiment at:
% 'https://github.com/zakadjeb/_New_TurningAttention_VR'
% Find the EEG datasets at:
% 'https://osf.io/92vzx'

%% 1. Dipole fitting

% Loading in the basic info
%------------------------------------
TurningAttention_EEG_BaseInfo;


% Set parameters
%------------------------------------
allPartici = [1 3:20];


% Loading in the ERP-dataset
%------------------------------------
for i = allPartici
    ALLEEG = []; EEG = []; CURRENTSET = [];
    EEG = pop_loadset('filename', 'RawData_NoBreaks_Resamp_Filt_ERPdataset_NotClean_Interp_AvgRef_ICAweighted.set', 'filepath', datapathSave{i});
    
    % Load in the default files
    dipfitdefs;
    
    % For participant 1, use another transform
    if i == 1
        transform = [0.83215 -15.6287 2.4114 0.081214 0.00093739 -1.5732 1.1742 1.0601 1.1485];
    else
        % Warping the channels.
        warping_channel_names = {2, 'FTT9h'; 26, 'FTT10h'; 84, 'C5'; 52, 'C6'; 33, 'AFz'; 92, 'POz'; 41, 'Cz'};
        command = 'EEG = pop_chanedit(EEG';
        for channel = 1:length(warping_channel_names)
            command = [command ', ''changefield'',{' num2str(warping_channel_names{channel,1}) ' ''labels'' ''' warping_channel_names{channel,2} '''}'];
        end
        command = [command ');'];
        eval(command);

        % With now standardized channel names, run the 'auto-warp' function
        [newlocs transform] = coregister(EEG.chanlocs, template_models(2).chanfile, 'warp', 'auto', 'manual', 'off');
    end
    
    
    % Settings for the fitting
    %------------------------------------
    EEG = pop_dipfit_settings(EEG, 'hdmfile', template_models(2).hdmfile,...
       'mrifile', template_models(2).mrifile,...
       'chanfile', template_models(2).chanfile,...
       'chansel',1:EEG.nbchan,...
       'coordformat','MNI',...
       'coord_transform',transform);
    
   
    % Actual fitting
    %------------------------------------
    numberOfIcaWeights = size(EEG.icaweights);
    disp(numberOfIcaWeights);
    EEG = pop_multifit(EEG, 1:size(EEG.icaweights,1) , 'threshold',99,'plotopt',{'normlen' 'on'});
    EEG = eeg_checkset(EEG);
    pop_saveset(EEG,'filename','RawData_NoBreaks_Resamp_Filt_ERPdataset_NotClean_Interp_AvgRef_ICAweighted_DipFitted.set','filepath', datapathSave{i});
end

% Check solution;
%pop_dipplot(EEG)

% To see the regions
% Regions = eeg_compatlas(EEG);
%% 2. (ERP-Dataset) Rejecting single components

% Loading in the basic info
%------------------------------------
TurningAttention_EEG_BaseInfo;


% Set parameters
%------------------------------------
allPartici = [1 3:20];

% Loading in the ERP-dataset
for i = allPartici
    ALLEEG = []; EEG = []; CURRENTSET = []; ICAEEG = []; EEG = [];
    EEG = pop_loadset('filename', 'RawData_NoBreaks_Resamp_Filt_ERPdataset_NotClean_Interp_AvgRef_ICAweighted_DipFitted.set', 'filepath', datapathSave{i});
    [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG, 2);
    
    % Perform ICLabel classification
    %------------------------------------
    EEG = iclabel(EEG, 'default');
    
    % Set the thresholds
    %------------------------------------
    ics_keepbrain = transpose(find(EEG.etc.ic_classification.ICLabel.classifications(:,1) >= 1/7)); % There are 7 classes, so better than chance is: 1/7 = .1429
    ics_keepmaxbrain = transpose(find(max(EEG.etc.ic_classification.ICLabel.classifications,[],2) == EEG.etc.ic_classification.ICLabel.classifications(:,1)));
%     ics_keepothers = transpose(find(EEG.etc.ic_classification.ICLabel.classifications(:,7) <= 0.5));
    ics_keep = union(ics_keepbrain, ics_keepmaxbrain);
    ics_keep = unique(ics_keep);
    ics_all = 1:size(EEG.icaact,1);
    ics_throw = setdiff(ics_all,ics_keep);
    
    % Remove non-brain ICs
    %------------------------------------
    EEG = pop_subcomp(EEG, ics_throw, 0, 0);
    [ALLEEG EEG CURRENTSET] = pop_newset(ALLEEG, EEG, 1,'gui','off'); 
    EEG = eeg_checkset(EEG);
    pop_saveset(EEG,'filename','ICAWeighted_noBreaks_resampled_ERPdataset_NotClean_Interp_AvRef_RenamedEvents_EyeRejected.set','filepath', datapathSave{i});
    
    disp(['// Non-brain ICs removed (' num2str(length(ics_throw)) ' of ' num2str(length(ics_all)) ').']);
end

%% 3. Unfold Toolbox (Standard)

% Loading in the basic info
%------------------------------------
TurningAttention_EEG_BaseInfo;


% Set parameters
%------------------------------------
allPartici = [1 3:20]; 
latencyAdjustment   = 20; %26
clear UNFOLD
rejectedPercentage = [];
particiCounter = 0;
cleanThres = 500; %750 %500 works for sure. 

% Identifying the baseline for ERSPs
%------------------------------------
baselineTwenty = cell(1,allPartici(end));
baselineFortyfive = cell(1,allPartici(end));
baselineNinety = cell(1,allPartici(end));
% for i = 1:allPartici(end)
%     baselineTwenty{i} = cell(1);
%     baselineFortyfive{i} = cell(1);
%     baselineNinety{i} = cell(1);
% end
baselineTimewindow = 400; % Data-points

% (channels,frames,trials)

% Loading in the ERP-dataset
%------------------------------------
ALLEEG = []; EEG = []; CURRENTSET = [];
for i = allPartici
    particiCounter = particiCounter + 1;
    % Load in the datasets
    %------------------------------------
    EEG = pop_loadset('filename', 'ICAWeighted_noBreaks_resampled_ERPdataset_NotClean_Interp_AvRef_RenamedEvents_EyeRejected.set', 'filepath', datapathSave{i});
    
    % Load this if only analyzing specific channels
    %------------------------------------
    % cfg = [];
    % cfg.channel = find(strcmp({EEG.chanlocs.labels},'LB6')); % PO7 and PO8 correspond to 'LB6' and 'RC6'
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'RC6'))];
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z11'))]; % Oz corresponds to Z11
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z9'))]; % POz corresponds to Z9
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z5'))]; % Cz corresponds to Z6
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z4'))]; % FCz corresponds to Z4
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'L11'))]; % O1 corresponds to O1
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'R11'))]; % O2 corresponds to R11
    % if isempty(cfg.channel)
    %     cfg.channel = find(strcmp({EEG.chanlocs.labels},'w11')); % PO7 and PO8 correspond to 'w11' and 'w22'
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w22'))];
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w29'))]; % Oz corresponds to w29
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'POz'))]; 
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Cz'))]; % 
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'y28'))]; % FCz corresponds to y28
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w2'))]; % O1 corresponds to w2
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w30'))]; % O2 corresponds to w30
    % end

    % But load this if analyzing all channels
    %------------------------------------
    cfg.channel = [];
    if i == 1
        for i2 = 1:size(EEG.chanlocs,2)
            [~,idx] = bemobil_mapchan({equidistChans.chanlocs(i2).labels},EEG,equidistChans);
            cfg.channel = [cfg.channel, idx];
        end
    else
        cfg.channel = 1:size(EEG.chanlocs,2);
    end
    

    % Adjusting my events to function with Unfold
    %------------------------------------
    for i2 = 1:length(EEG.event)
        % Correction event-timing (accounting for Unity latency of 20 ms)
        %------------------------------------
        EEG.event(i2).latency = EEG.event(i2).latency+latencyAdjustment;
        % if i == 1
        %     EEG.event(i2).latency = EEG.event(i2).latency+(latencyAdjustment/2);
        % else
        %     EEG.event(i2).latency = EEG.event(i2).latency+latencyAdjustment;
        % end

        % Get the turning condition
        if contains(EEG.event(i2).type, 'Twenty') 
            EEG.event(i2).TurningDegree = 'Twenty';
        elseif contains(EEG.event(i2).type, 'Fortyfive') 
            EEG.event(i2).TurningDegree = 'Fortyfive';
        elseif contains(EEG.event(i2).type, 'Ninety') 
            EEG.event(i2).TurningDegree = 'Ninety';
        end
        
        % Get the turning direction
        if contains(EEG.event(i2).type, 'TurningLeft') && endsWith(EEG.event(i2).type, ';Right') 
            EEG.event(i2).Direction = 'Contralateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimRight';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningRight') && endsWith(EEG.event(i2).type, ';Right')
            EEG.event(i2).Direction = 'Ipsilateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimRight';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningLeft') && endsWith(EEG.event(i2).type, ';Left') 
            EEG.event(i2).Direction = 'Ipsilateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimLeft';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningRight') && endsWith(EEG.event(i2).type, ';Left') 
            EEG.event(i2).Direction = 'Contralateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimLeft';
            EEG.event(i2).type = 'A_Stimulus';
        end
                
        % Get the motor response
        if contains(EEG.event(i2).type, ';Hit') 
            if strcmp(EEG.event(i2-1).Direction, 'Contralateral')
                EEG.event(i2).Response = 'Hit';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Contralateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            elseif strcmp(EEG.event(i2-1).Direction, 'Ipsilateral')
                EEG.event(i2).Response = 'Hit';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Ipsilateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            end
        elseif contains(EEG.event(i2).type, 'Miss') 
            if strcmp(EEG.event(i2-1).Direction, 'Contralateral')
                EEG.event(i2).Response = 'Miss';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Contralateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            elseif strcmp(EEG.event(i2-1).Direction, 'Ipsilateral')
                EEG.event(i2).Response = 'Miss';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Ipsilateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            end
        end
    end
    
    
    % Delete rows with empty columns
    %------------------------------------
    tempNote = [];
    for i2 = 1:length(EEG.event)
%         if isempty(EEG.event(i2).TurningDegree) || isempty(EEG.event(i2).TurningDirection) || isempty(EEG.event(i2).StimulusDirection)
        if ~strcmp(EEG.event(i2).type, 'A_Stimulus') && ~strcmp(EEG.event(i2).type, 'B_Response')
            tempNote = [tempNote; i2];
        end
    end
    EEG.event(tempNote) = [];
    clear tempNote;
    
    
    % Defining the Unfold Model
    %-----------------------------------
    cfgDesign = []; 
    cfgDesign.eventtypes = {{'A_Stimulus'},{'B_Response'}};
    % cfgDesign.eventtypes = {'Stimulus'};
     cfgDesign.formula = {'y ~ 1 + cat(Direction) * cat(TurningDegree) * cat(StimulusDirection)',...
        'y ~ 1 + cat(Response)'};
    % cfgDesign.formula = {'y ~ 1 + cat(Direction) + cat(TurningDegree) + cat(Response) + cat(Response):cat(Direction):cat(TurningDegree)' };
    % cfgDesign.formula = {'y ~ 1 + (cat(Direction) + cat(TurningDegree)) * cat(Response)' };
    cfgDesign.codingschema = 'reference';
    EEG = uf_designmat(EEG,cfgDesign);
    
    
    % Time shifting the model
    %-----------------------------------
    cfgTimeexpand = [];
    cfgTimeexpand.timelimits = [-.2, .6];
    cfgTimexpand.method = 'stick';
    EEG = uf_timeexpandDesignmat(EEG,cfgTimeexpand);
    % uf_plotDesignmat(EEG,'sort',1,'figure',0);
    
    % Autocleaning the data
    %-----------------------------------
    % winrej = uf_continuousArtifactDetectASR(EEG,'channel',cfg.channel,'cutoff',15);
    % uf_continuousArtifactDetectJointProb(EEG,'channel',cfg.channel,'locthresh',3);
    winrej = uf_continuousArtifactDetect(EEG,'amplitudeThreshold', cleanThres);
    tempWindow = [];
    for i2 = 1:size(winrej,1)
        tempWindow = [tempWindow; winrej(i2,2) - winrej(i2,1)];
    end
    % if sum(tempWindow)/EEG.pnts > .95
    %     while sum(tempWindow)/EEG.pnts > .95
    %         cleanThres = cleanThres + 25;
    %         winrej = uf_continuousArtifactDetect(EEG,'amplitudeThreshold', cleanThres);
    %         tempWindow = [];
    %         for i2 = 1:size(winrej,1)
    %             tempWindow = [tempWindow; winrej(i2,2) - winrej(i2,1)];
    %         end
    %     end
    % end
    EEG = uf_continuousArtifactExclude(EEG,struct('winrej',winrej));
    if isempty(winrej); winrej = [0 0]; end
    
    % Fitting the model
    %-----------------------------------
    EEG = uf_glmfit(EEG,'channel',cfg.channel); % ,'channel',cfg.channel
    EEG.reject.unfold = sum(winrej(:,2)-winrej(:,1))/size(EEG.data,2);
    rejectedPercentage = [rejectedPercentage; EEG.reject.unfold];
    EEG = uf_epoch(EEG,struct('winrej',winrej,'timelimits',cfgTimeexpand.timelimits));
    
    % % If using effects coding-scheme
    % %-----------------------------------
    % ufresult = uf_condense(EEG);
    % ufresult.beta = ufresult.beta * 2; % * 2 due to effect coding with -1 / 1.

    % Plotting the results (not necessary, obviously)
    %-----------------------------------
    ufresult = uf_condense(EEG);
    cfg.add_intercept = 1; % sum the intercept to each column
    cfg.include_intercept = 1; % include the intercept as dashed line
    cfg.deconv = 1; 
    % ax = uf_plotParam(ufresult,'channel',cfg.channel(1));
    
    % Extracting the conditions
    %-----------------------------------
    clear erp_45_contra_left erp_45_contra_right erp_45_ipsi_left erp_45_ipsi_right 
    clear erp_20_contra_left erp_20_contra_right erp_20_ipsi_left erp_20_ipsi_right 
    clear erp_90_contra_left erp_90_contra_right erp_90_ipsi_left erp_90_ipsi_right
    erp_45_contra_left = []; erp_45_contra_right = []; erp_45_ipsi_left = []; erp_45_ipsi_right = []; 
    erp_20_contra_left = []; erp_20_contra_right = []; erp_20_ipsi_left = []; erp_20_ipsi_right = [];
    erp_90_contra_left = []; erp_90_contra_right = []; erp_90_ipsi_left = []; erp_90_ipsi_right = [];
    
    clear p3_45_contra_left p3_45_contra_right p3_45_ipsi_left p3_45_ipsi_right 
    clear p3_20_contra_left p3_20_contra_right p3_20_ipsi_left p3_20_ipsi_right 
    clear p3_90_contra_left p3_90_contra_right p3_90_ipsi_left p3_90_ipsi_right
    p3_45_contra_left = []; p3_45_contra_right = []; p3_45_ipsi_left = []; p3_45_ipsi_right = []; 
    p3_20_contra_left = []; p3_20_contra_right = []; p3_20_ipsi_left = []; p3_20_ipsi_right = [];
    p3_90_contra_left = []; p3_90_contra_right = []; p3_90_ipsi_left = []; p3_90_ipsi_right = [];
    
    for i2 = cfg.channel%1:length(EEG.chanlocs)
        mT = zeros(14,12);
        mT(1,1) = 1;
        erp_45_contra_left = [erp_45_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,1))']; %[1,0,0,0,0,0,0,0,0,0,0,0,0,0]
        mT([1,3],2) = 1;
        erp_45_contra_right = [erp_45_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,2))'];

        mT([1,2],3) = 1;
        erp_45_ipsi_left = [erp_45_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,3))'];
        mT([1,2,3,6],4) = 1;
        erp_45_ipsi_right = [erp_45_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,4))'];

        mT([1,5],5) = 1;
        erp_20_contra_left = [erp_20_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,5))'];
        mT([1,3,5,10],6) = 1;
        erp_20_contra_right = [erp_20_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,6))'];

        mT([1,2,5,8],7) = 1;
        erp_20_ipsi_left = [erp_20_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,7))'];
        mT([1,2,3,5,6,8,10,12],8) = 1;
        erp_20_ipsi_right = [erp_20_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,8))'];

        mT([1,4],9) = 1;
        erp_90_contra_left = [erp_90_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,9))'];
        mT([1,3,4,9],10) = 1;
        erp_90_contra_right = [erp_90_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,10))'];

        mT([1,2,4,7],11) = 1;
        erp_90_ipsi_left = [erp_90_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,11))'];
        mT([1,2,3,4,6,7,9,11],12) = 1;
        erp_90_ipsi_right = [erp_90_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,12))'];


        mT(13,1) = 1;
        p3_45_contra_left = [p3_45_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,1))'];
        mT(13,2) = 1;
        p3_45_contra_right = [p3_45_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,2))'];

        mT(13,3) = 1;
        p3_45_ipsi_left = [p3_45_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,3))'];
        mT(13,4) = 1;
        p3_45_ipsi_right = [p3_45_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,4))'];

        mT(13,5) = 1;
        p3_20_contra_left = [p3_20_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,5))'];
        mT(13,6) = 1;
        p3_20_contra_right = [p3_20_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,6))'];

        mT(13,7) = 1;
        p3_20_ipsi_left = [p3_20_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,7))'];
        mT(13,8) = 1;
        p3_20_ipsi_right = [p3_20_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,8))'];

        mT(13,9) = 1;
        p3_90_contra_left = [p3_90_contra_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,9))'];
        mT(13,10) = 1;
        p3_90_contra_right = [p3_90_contra_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,10))'];
        
        mT(13,11) = 1;
        p3_90_ipsi_left = [p3_90_ipsi_left; (squeeze(ufresult.beta(i2,:,:)) * mT(:,11))'];
        mT(13,12) = 1;
        p3_90_ipsi_right = [p3_90_ipsi_right; (squeeze(ufresult.beta(i2,:,:)) * mT(:,12))'];
    end
    
    % Baseline correction
    %-----------------------------------
    BaselineTimeWindow = [-200 0];

    for i2 = 1:size(erp_45_contra_left,1)
        for i3 = 1:size(erp_45_contra_left,3)
            erp_45_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_45_contra_left(i2,:,i3), BaselineTimeWindow);
            erp_45_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_45_contra_right(i2,:,i3), BaselineTimeWindow);

            erp_45_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_45_ipsi_left(i2,:,i3), BaselineTimeWindow);
            erp_45_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_45_ipsi_right(i2,:,i3), BaselineTimeWindow);

            erp_20_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_20_contra_left(i2,:,i3), BaselineTimeWindow);
            erp_20_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_20_contra_right(i2,:,i3), BaselineTimeWindow);

            erp_20_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_20_ipsi_left(i2,:,i3), BaselineTimeWindow);
            erp_20_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_20_ipsi_right(i2,:,i3), BaselineTimeWindow);

            erp_90_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_90_contra_left(i2,:,i3), BaselineTimeWindow);
            erp_90_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, erp_90_contra_right(i2,:,i3), BaselineTimeWindow);

            erp_90_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_90_ipsi_left(i2,:,i3), BaselineTimeWindow);
            erp_90_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, erp_90_ipsi_right(i2,:,i3), BaselineTimeWindow);


            p3_45_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_45_contra_left(i2,:,i3), BaselineTimeWindow);
            p3_45_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_45_contra_right(i2,:,i3), BaselineTimeWindow);

            p3_45_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_45_ipsi_left(i2,:,i3), BaselineTimeWindow);
            p3_45_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_45_ipsi_right(i2,:,i3), BaselineTimeWindow);

            p3_20_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_20_contra_left(i2,:,i3), BaselineTimeWindow);
            p3_20_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_20_contra_right(i2,:,i3), BaselineTimeWindow);

            p3_20_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_20_ipsi_left(i2,:,i3), BaselineTimeWindow);
            p3_20_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_20_ipsi_right(i2,:,i3), BaselineTimeWindow);

            p3_90_contra_left(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_90_contra_left(i2,:,i3), BaselineTimeWindow);
            p3_90_contra_right(i2,:,i3)  = baselinecorrection(EEG(1).times, p3_90_contra_right(i2,:,i3), BaselineTimeWindow);

            p3_90_ipsi_left(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_90_ipsi_left(i2,:,i3), BaselineTimeWindow);
            p3_90_ipsi_right(i2,:,i3)    = baselinecorrection(EEG(1).times, p3_90_ipsi_right(i2,:,i3), BaselineTimeWindow);
        end
    end
    
    % Plotting the results
    %-----------------------------------
    for k = 1:length(cfg.channel)
        % Store the EEG to ALLEEG
        %------------------------------------
        UNFOLD{i}{k}.erp_45_contra_left     = erp_45_contra_left(k,:);
        UNFOLD{i}{k}.erp_45_contra_right    = erp_45_contra_right(k,:);

        UNFOLD{i}{k}.erp_45_ipsi_left       = erp_45_ipsi_left(k,:);
        UNFOLD{i}{k}.erp_45_ipsi_right      = erp_45_ipsi_right(k,:);

        UNFOLD{i}{k}.erp_20_contra_left     = erp_20_contra_left(k,:);
        UNFOLD{i}{k}.erp_20_contra_right    = erp_20_contra_right(k,:);

        UNFOLD{i}{k}.erp_20_ipsi_left       = erp_20_ipsi_left(k,:);
        UNFOLD{i}{k}.erp_20_ipsi_right      = erp_20_ipsi_right(k,:);

        UNFOLD{i}{k}.erp_90_contra_left     = erp_90_contra_left(k,:);
        UNFOLD{i}{k}.erp_90_contra_right    = erp_90_contra_right(k,:);

        UNFOLD{i}{k}.erp_90_ipsi_left       = erp_90_ipsi_left(k,:);
        UNFOLD{i}{k}.erp_90_ipsi_right      = erp_90_ipsi_right(k,:);


        UNFOLD{i}{k}.p3_45_contra_left     = p3_45_contra_left(k,:);
        UNFOLD{i}{k}.p3_45_contra_right    = p3_45_contra_right(k,:);

        UNFOLD{i}{k}.p3_45_ipsi_left       = p3_45_ipsi_left(k,:);
        UNFOLD{i}{k}.p3_45_ipsi_right      = p3_45_ipsi_right(k,:);

        UNFOLD{i}{k}.p3_20_contra_left     = p3_20_contra_left(k,:);
        UNFOLD{i}{k}.p3_20_contra_right    = p3_20_contra_right(k,:);

        UNFOLD{i}{k}.p3_20_ipsi_left       = p3_20_ipsi_left(k,:);
        UNFOLD{i}{k}.p3_20_ipsi_right      = p3_20_ipsi_right(k,:);

        UNFOLD{i}{k}.p3_90_contra_left     = p3_90_contra_left(k,:);
        UNFOLD{i}{k}.p3_90_contra_right    = p3_90_contra_right(k,:);

        UNFOLD{i}{k}.p3_90_ipsi_left       = p3_90_ipsi_left(k,:);
        UNFOLD{i}{k}.p3_90_ipsi_right      = p3_90_ipsi_right(k,:);
    end

end
UNFOLD{end+1} = EEG.times;
save('C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\UNFOLD.mat', 'UNFOLD');
disp(['Rejected data: ' num2str(round(100*mean(rejectedPercentage),2)) '%']);

%% 3. Unfold Toolbox (Use this! Based on Stimulus Order)

% Loading in the basic info
%------------------------------------
TurningAttention_EEG_BaseInfo;


% Set parameters
%------------------------------------
allPartici = [1 3:20]; 
latencyAdjustment   = 20; %26
clear UNFOLD
rejectedPercentage = [];
particiCounter = 0;
cleanThres = 500; %750 %500 works for sure. 

% Identifying the baseline for ERSPs
%------------------------------------
baselineTwenty = cell(1,allPartici(end));
baselineFortyfive = cell(1,allPartici(end));
baselineNinety = cell(1,allPartici(end));
% for i = 1:allPartici(end)
%     baselineTwenty{i} = cell(1);
%     baselineFortyfive{i} = cell(1);
%     baselineNinety{i} = cell(1);
% end
baselineTimewindow = 400; % Data-points

% (channels,frames,trials)

% Loading in the ERP-dataset
%------------------------------------
ALLEEG = []; EEG = []; CURRENTSET = [];
for i = allPartici
    particiCounter = particiCounter + 1;
    % Load in the datasets
    %------------------------------------
    EEG = pop_loadset('filename', 'ICAWeighted_noBreaks_resampled_ERPdataset_NotClean_Interp_AvRef_RenamedEvents_EyeRejected.set', 'filepath', datapathSave{i});
    
    % Load this if only analyzing specific channels
    %------------------------------------
    % cfg = [];
    % cfg.channel = find(strcmp({EEG.chanlocs.labels},'LB6')); % PO7 and PO8 correspond to 'LB6' and 'RC6'
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'RC6'))];
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z11'))]; % Oz corresponds to Z11
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z9'))]; % POz corresponds to Z9
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z5'))]; % Cz corresponds to Z6
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Z4'))]; % FCz corresponds to Z4
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'L11'))]; % O1 corresponds to O1
    % cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'R11'))]; % O2 corresponds to R11
    % if isempty(cfg.channel)
    %     cfg.channel = find(strcmp({EEG.chanlocs.labels},'w11')); % PO7 and PO8 correspond to 'w11' and 'w22'
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w22'))];
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w29'))]; % Oz corresponds to w29
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'POz'))]; 
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'Cz'))]; % 
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'y28'))]; % FCz corresponds to y28
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w2'))]; % O1 corresponds to w2
    %     cfg.channel = [cfg.channel, find(strcmp({EEG.chanlocs.labels},'w30'))]; % O2 corresponds to w30
    % end

    % But load this if analyzing all channels
    %------------------------------------
    cfg.channel = [];
    if i == 1
        for i2 = 1:size(EEG.chanlocs,2)
            [~,idx] = bemobil_mapchan({equidistChans.chanlocs(i2).labels},EEG,equidistChans);
            cfg.channel = [cfg.channel, idx];
        end
    else
        cfg.channel = 1:size(EEG.chanlocs,2);
    end
    

    % Adjusting my events to function with Unfold
    %------------------------------------
    for i2 = 1:length(EEG.event)
        % Correction event-timing (accounting for Unity latency of 20 ms)
        %------------------------------------
        EEG.event(i2).latency = EEG.event(i2).latency+latencyAdjustment;
        % if i == 1
        %     EEG.event(i2).latency = EEG.event(i2).latency+(latencyAdjustment/2);
        % else
        %     EEG.event(i2).latency = EEG.event(i2).latency+latencyAdjustment;
        % end

        % Get the turning condition
        if contains(EEG.event(i2).type, 'Twenty') 
            EEG.event(i2).TurningDegree = 'Twenty';
        elseif contains(EEG.event(i2).type, 'Fortyfive') 
            EEG.event(i2).TurningDegree = 'Fortyfive';
        elseif contains(EEG.event(i2).type, 'Ninety') 
            EEG.event(i2).TurningDegree = 'Ninety';
        end

        % Get the stimulus order
        if contains(EEG.event(i2).type, 'Wall1;')
            EEG.event(i2).StimulusOrder = '0';
        elseif contains(EEG.event(i2).type, 'Wall2;')
            EEG.event(i2).StimulusOrder = '1';
        elseif contains(EEG.event(i2).type, 'Wall3;')
            EEG.event(i2).StimulusOrder = '2';
        elseif contains(EEG.event(i2).type, 'Wall4;')
            EEG.event(i2).StimulusOrder = '3';
        elseif contains(EEG.event(i2).type, 'Wall5;')
            EEG.event(i2).StimulusOrder = '4';
        elseif contains(EEG.event(i2).type, 'Wall6;')
            EEG.event(i2).StimulusOrder = '5';
        elseif contains(EEG.event(i2).type, 'Wall7;')
            EEG.event(i2).StimulusOrder = '6';
        elseif contains(EEG.event(i2).type, 'Wall8;')
            EEG.event(i2).StimulusOrder = '7';
        elseif contains(EEG.event(i2).type, 'Wall9;')
            EEG.event(i2).StimulusOrder = '8';
        elseif contains(EEG.event(i2).type, 'Wall10;')
            EEG.event(i2).StimulusOrder = '9';
        end
        
        % Get the turning direction
        if contains(EEG.event(i2).type, 'TurningLeft') && endsWith(EEG.event(i2).type, ';Right') 
            EEG.event(i2).Direction = 'Contralateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimRight';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningRight') && endsWith(EEG.event(i2).type, ';Right')
            EEG.event(i2).Direction = 'Ipsilateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimRight';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningLeft') && endsWith(EEG.event(i2).type, ';Left') 
            EEG.event(i2).Direction = 'Ipsilateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimLeft';
            EEG.event(i2).type = 'A_Stimulus';
        elseif contains(EEG.event(i2).type, 'TurningRight') && endsWith(EEG.event(i2).type, ';Left') 
            EEG.event(i2).Direction = 'Contralateral';
            EEG.event(i2).Response = 'A_none';
            EEG.event(i2).StimulusDirection = 'StimLeft';
            EEG.event(i2).type = 'A_Stimulus';
        end
                
        % Get the motor response
        if contains(EEG.event(i2).type, ';Hit') 
            if strcmp(EEG.event(i2-1).Direction, 'Contralateral')
                EEG.event(i2).Response = 'Hit';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Contralateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            elseif strcmp(EEG.event(i2-1).Direction, 'Ipsilateral')
                EEG.event(i2).Response = 'Hit';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Ipsilateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            end
        elseif contains(EEG.event(i2).type, 'Miss') 
            if strcmp(EEG.event(i2-1).Direction, 'Contralateral')
                EEG.event(i2).Response = 'Miss';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Contralateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            elseif strcmp(EEG.event(i2-1).Direction, 'Ipsilateral')
                EEG.event(i2).Response = 'Miss';
                EEG.event(i2).type = 'B_Response';
                EEG.event(i2).Direction = 'Ipsilateral';
                EEG.event(i2).StimulusDirection = EEG.event(i2-1).StimulusDirection;
            end
        end
    end
    
    
    % Delete rows with empty columns
    %------------------------------------
    tempNote = [];
    for i2 = 1:length(EEG.event)
%         if isempty(EEG.event(i2).TurningDegree) || isempty(EEG.event(i2).TurningDirection) || isempty(EEG.event(i2).StimulusDirection)
        if ~strcmp(EEG.event(i2).type, 'A_Stimulus') && ~strcmp(EEG.event(i2).type, 'B_Response')
            tempNote = [tempNote; i2];
        end
    end
    EEG.event(tempNote) = [];
    clear tempNote;
    
    
    % Defining the Unfold Model
    %-----------------------------------
    cfgDesign = []; 
    cfgDesign.eventtypes = {{'A_Stimulus'},{'B_Response'}};
    % cfgDesign.eventtypes = {'Stimulus'};
     cfgDesign.formula = {'y ~ 1 + (cat(Direction) * cat(TurningDegree) * cat(StimulusDirection)) * cat(StimulusOrder)',...
        'y ~ 1 + cat(Response)'};
    % cfgDesign.formula = {'y ~ 1 + cat(Direction) + cat(TurningDegree) + cat(Response) + cat(Response):cat(Direction):cat(TurningDegree)' };
    % cfgDesign.formula = {'y ~ 1 + (cat(Direction) + cat(TurningDegree)) * cat(Response)' };
    cfgDesign.codingschema = 'reference';
    EEG = uf_designmat(EEG,cfgDesign);
    
    
    % Time shifting the model
    %-----------------------------------
    cfgTimeexpand = [];
    cfgTimeexpand.timelimits = [-.2, .6];
    cfgTimexpand.method = 'stick';
    EEG = uf_timeexpandDesignmat(EEG,cfgTimeexpand);
    % uf_plotDesignmat(EEG,'sort',1,'figure',0);
    
    % Autocleaning the data
    %-----------------------------------
    % winrej = uf_continuousArtifactDetectASR(EEG,'channel',cfg.channel,'cutoff',15);
    % uf_continuousArtifactDetectJointProb(EEG,'channel',cfg.channel,'locthresh',3);
    winrej = uf_continuousArtifactDetect(EEG,'amplitudeThreshold', cleanThres);
    tempWindow = [];
    for i2 = 1:size(winrej,1)
        tempWindow = [tempWindow; winrej(i2,2) - winrej(i2,1)];
    end
    % if sum(tempWindow)/EEG.pnts > .95
    %     while sum(tempWindow)/EEG.pnts > .95
    %         cleanThres = cleanThres + 25;
    %         winrej = uf_continuousArtifactDetect(EEG,'amplitudeThreshold', cleanThres);
    %         tempWindow = [];
    %         for i2 = 1:size(winrej,1)
    %             tempWindow = [tempWindow; winrej(i2,2) - winrej(i2,1)];
    %         end
    %     end
    % end
    EEG = uf_continuousArtifactExclude(EEG,struct('winrej',winrej));
    if isempty(winrej); winrej = [0 0]; end
    
    % Fitting the model
    %-----------------------------------
    EEG = uf_glmfit(EEG,'channel',cfg.channel); % ,'channel',cfg.channel
    EEG.reject.unfold = sum(winrej(:,2)-winrej(:,1))/size(EEG.data,2);
    rejectedPercentage = [rejectedPercentage; EEG.reject.unfold];
    EEG = uf_epoch(EEG,struct('winrej',winrej,'timelimits',cfgTimeexpand.timelimits));
    
    % % If using effects coding-scheme
    % %-----------------------------------
    % ufresult = uf_condense(EEG);
    % ufresult.beta = ufresult.beta * 2; % * 2 due to effect coding with -1 / 1.

    % Plotting the results (not necessary, obviously)
    %-----------------------------------
    ufresult = uf_condense(EEG);
    cfg.add_intercept = 1; % sum the intercept to each column
    cfg.include_intercept = 1; % include the intercept as dashed line
    cfg.deconv = 1; 
    % ax = uf_plotParam(ufresult,'channel',cfg.channel(1));
    
    % Extracting the conditions
    %-----------------------------------
    clear erp_45_contra_left erp_45_contra_right erp_45_ipsi_left erp_45_ipsi_right 
    clear erp_20_contra_left erp_20_contra_right erp_20_ipsi_left erp_20_ipsi_right 
    clear erp_90_contra_left erp_90_contra_right erp_90_ipsi_left erp_90_ipsi_right
    erp_45_contra_left = cell(1,10); erp_45_contra_right = cell(1,10); erp_45_ipsi_left = cell(1,10); erp_45_ipsi_right = cell(1,10); 
    erp_20_contra_left = cell(1,10); erp_20_contra_right = cell(1,10); erp_20_ipsi_left = cell(1,10); erp_20_ipsi_right = cell(1,10);
    erp_90_contra_left = cell(1,10); erp_90_contra_right = cell(1,10); erp_90_ipsi_left = cell(1,10); erp_90_ipsi_right = cell(1,10);
    
    clear p3_45_contra_left p3_45_contra_right p3_45_ipsi_left p3_45_ipsi_right 
    clear p3_20_contra_left p3_20_contra_right p3_20_ipsi_left p3_20_ipsi_right 
    clear p3_90_contra_left p3_90_contra_right p3_90_ipsi_left p3_90_ipsi_right
    p3_45_contra_left = cell(1,10); p3_45_contra_right = cell(1,10); p3_45_ipsi_left = cell(1,10); p3_45_ipsi_right = cell(1,10); 
    p3_20_contra_left = cell(1,10); p3_20_contra_right = cell(1,10); p3_20_ipsi_left = cell(1,10); p3_20_ipsi_right = cell(1,10);
    p3_90_contra_left = cell(1,10); p3_90_contra_right = cell(1,10); p3_90_ipsi_left = cell(1,10); p3_90_ipsi_right = cell(1,10);
    
    singleFactor                = 2:14;
    IpsiStimRight               = 15;
    IpsiOrder                   = 16:24;
    StimRightOrder              = 25:33;
    IpsiTurning                 = 34:35;
    StimRightTurning            = 36:37;
    OrderTurning                = 38:55;
    IpsiStimRightOrder          = 56:64;
    IpsiStimRightTurning        = 65:66;
    IpsiOrderTurning            = 67:84;
    StimRightOrderTurning       = 85:102;
    IpsiStimRightOrderTurning   = 103:120;

    tmp = string({ufresult.param.name});
    
    
    for i2 = cfg.channel%1:length(EEG.chanlocs)
        for i3 = 0:9
            mT = zeros(122,12);

            search{1} = "Contra"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Fortyfive"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,1) = 1;
            erp_45_contra_left{i3+1} = [erp_45_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,1))']; %[1,0,0,0,0,0,0,0,0,0,0,0,0,0]

            search{1} = "Contra"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Fortyfive"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,2) = 1;
            erp_45_contra_right{i3+1} = [erp_45_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,2))'];
    
            search{1} = "Ipsi"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Fortyfive"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,3) = 1;
            erp_45_ipsi_left{i3+1} = [erp_45_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,3))'];

            search{1} = "Ipsi"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Fortyfive"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,4) = 1;
            erp_45_ipsi_right{i3+1} = [erp_45_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,4))'];
    
            search{1} = "Contra"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Twenty"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,5) = 1;
            erp_20_contra_left{i3+1} = [erp_20_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,5))'];

            search{1} = "Contra"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Twenty"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,6) = 1;
            erp_20_contra_right{i3+1} = [erp_20_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,6))'];
    
            search{1} = "Ipsi"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Twenty"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,7) = 1;
            erp_20_ipsi_left{i3+1} = [erp_20_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,7))'];

            search{1} = "Ipsi"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Twenty"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,8) = 1;
            erp_20_ipsi_right{i3+1} = [erp_20_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,8))'];
    
            search{1} = "Contra"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Ninety"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,9) = 1;
            erp_90_contra_left{i3+1} = [erp_90_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,9))'];
            
            search{1} = "Contra"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Ninety"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,10) = 1;
            erp_90_contra_right{i3+1} = [erp_90_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,10))'];
    
            search{1} = "Ipsi"; search{2} = "StimLeft"; search{3} = "_"+num2str(i3); search{4} = "Ninety"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,11) = 1;
            erp_90_ipsi_left{i3+1} = [erp_90_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,11))'];
            
            search{1} = "Ipsi"; search{2} = "StimRight"; search{3} = "_"+num2str(i3); search{4} = "Ninety"; idx = 1;
            idx = [idx,singleFactor(contains(tmp(singleFactor),search{1})),singleFactor(contains(tmp(singleFactor),search{2})),...
                    singleFactor(contains(tmp(singleFactor),search{3})),singleFactor(contains(tmp(singleFactor),search{4}))];
            idx = [idx,IpsiStimRight(contains(tmp(IpsiStimRight),search{1}) & contains(tmp(IpsiStimRight),search{2}))];
            idx = [idx,IpsiOrder(contains(tmp(IpsiOrder),search{1}) & contains(tmp(IpsiOrder),search{3}))];
            idx = [idx,StimRightOrder(contains(tmp(StimRightOrder),search{2}) & contains(tmp(StimRightOrder),search{3}))];
            idx = [idx,IpsiTurning(contains(tmp(IpsiTurning),search{1}) & contains(tmp(IpsiTurning),search{4}))];
            idx = [idx,StimRightTurning(contains(tmp(StimRightTurning),search{2}) & contains(tmp(StimRightTurning),search{4}))];
            idx = [idx,OrderTurning(contains(tmp(OrderTurning),search{3}) & contains(tmp(OrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrder(contains(tmp(IpsiStimRightOrder),search{1}) & contains(tmp(IpsiStimRightOrder),search{2}) & contains(tmp(IpsiStimRightOrder),search{3}))];
            idx = [idx,IpsiStimRightTurning(contains(tmp(IpsiStimRightTurning),search{1}) & contains(tmp(IpsiStimRightTurning),search{2}) & contains(tmp(IpsiStimRightTurning),search{4}))];
            idx = [idx,IpsiOrderTurning(contains(tmp(IpsiOrderTurning),search{1}) & contains(tmp(IpsiOrderTurning),search{3}) & contains(tmp(IpsiOrderTurning),search{4}))];
            idx = [idx,StimRightOrderTurning(contains(tmp(StimRightOrderTurning),search{2}) & contains(tmp(StimRightOrderTurning),search{3}) & contains(tmp(StimRightOrderTurning),search{4}))];
            idx = [idx,IpsiStimRightOrderTurning(contains(tmp(IpsiStimRightOrderTurning),search{1}) & contains(tmp(IpsiStimRightOrderTurning),search{2}) & contains(tmp(IpsiStimRightOrderTurning),search{3}) & contains(tmp(IpsiStimRightOrderTurning),search{4}))];
            mT(idx,12) = 1;
            erp_90_ipsi_right{i3+1} = [erp_90_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,12))'];
    
    
            mT(121,1) = 1;
            p3_45_contra_left{i3+1} = [p3_45_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,1))'];
            mT(121,2) = 1;
            p3_45_contra_right{i3+1} = [p3_45_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,2))'];
    
            mT(121,3) = 1;
            p3_45_ipsi_left{i3+1} = [p3_45_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,3))'];
            mT(121,4) = 1;
            p3_45_ipsi_right{i3+1} = [p3_45_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,4))'];
    
            mT(121,5) = 1;
            p3_20_contra_left{i3+1} = [p3_20_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,5))'];
            mT(121,6) = 1;
            p3_20_contra_right{i3+1} = [p3_20_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,6))'];
    
            mT(121,7) = 1;
            p3_20_ipsi_left{i3+1} = [p3_20_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,7))'];
            mT(121,8) = 1;
            p3_20_ipsi_right{i3+1} = [p3_20_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,8))'];
    
            mT(121,9) = 1;
            p3_90_contra_left{i3+1} = [p3_90_contra_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,9))'];
            mT(121,10) = 1;
            p3_90_contra_right{i3+1} = [p3_90_contra_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,10))'];
            
            mT(121,11) = 1;
            p3_90_ipsi_left{i3+1} = [p3_90_ipsi_left{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,11))'];
            mT(121,12) = 1;
            p3_90_ipsi_right{i3+1} = [p3_90_ipsi_right{i3+1}; (squeeze(ufresult.beta(i2,:,:)) * mT(:,12))'];
        end
    end
    
    % Baseline correction
    %-----------------------------------
    BaselineTimeWindow = [-200 0];

    for i3 = 1:size(erp_45_contra_left{1},1)
        for i4 = 1:size(erp_45_contra_left,2)
            erp_45_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_45_contra_left{i4}(i3,:), BaselineTimeWindow);
            erp_45_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_45_contra_right{i4}(i3,:), BaselineTimeWindow);

            erp_45_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_45_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            erp_45_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_45_ipsi_right{i4}(i3,:), BaselineTimeWindow);

            erp_20_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_20_contra_left{i4}(i3,:), BaselineTimeWindow);
            erp_20_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_20_contra_right{i4}(i3,:), BaselineTimeWindow);

            erp_20_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_20_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            erp_20_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_20_ipsi_right{i4}(i3,:), BaselineTimeWindow);

            erp_90_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_90_contra_left{i4}(i3,:), BaselineTimeWindow);
            erp_90_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, erp_90_contra_right{i4}(i3,:), BaselineTimeWindow);

            erp_90_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_90_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            erp_90_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, erp_90_ipsi_right{i4}(i3,:), BaselineTimeWindow);


            p3_45_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_45_contra_left{i4}(i3,:), BaselineTimeWindow);
            p3_45_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_45_contra_right{i4}(i3,:), BaselineTimeWindow);

            p3_45_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_45_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            p3_45_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_45_ipsi_right{i4}(i3,:), BaselineTimeWindow);

            p3_20_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_20_contra_left{i4}(i3,:), BaselineTimeWindow);
            p3_20_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_20_contra_right{i4}(i3,:), BaselineTimeWindow);

            p3_20_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_20_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            p3_20_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_20_ipsi_right{i4}(i3,:), BaselineTimeWindow);

            p3_90_contra_left{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_90_contra_left{i4}(i3,:), BaselineTimeWindow);
            p3_90_contra_right{i4}(i3,:)  = baselinecorrection(EEG(1).times, p3_90_contra_right{i4}(i3,:), BaselineTimeWindow);

            p3_90_ipsi_left{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_90_ipsi_left{i4}(i3,:), BaselineTimeWindow);
            p3_90_ipsi_right{i4}(i3,:)    = baselinecorrection(EEG(1).times, p3_90_ipsi_right{i4}(i3,:), BaselineTimeWindow);
        end
    end
    
    % Plotting the results
    %-----------------------------------
    for k = 1:length(cfg.channel)
        for m = 1:10 % Stimulus Order
            % Store the EEG to ALLEEG
            %------------------------------------
            UNFOLD{i}{k}{m}.erp_45_contra_left     = erp_45_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_45_contra_right    = erp_45_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.erp_45_ipsi_left       = erp_45_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_45_ipsi_right      = erp_45_ipsi_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.erp_20_contra_left     = erp_20_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_20_contra_right    = erp_20_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.erp_20_ipsi_left       = erp_20_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_20_ipsi_right      = erp_20_ipsi_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.erp_90_contra_left     = erp_90_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_90_contra_right    = erp_90_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.erp_90_ipsi_left       = erp_90_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.erp_90_ipsi_right      = erp_90_ipsi_right{m}(k,:);
    
    
            UNFOLD{i}{k}{m}.p3_45_contra_left     = p3_45_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_45_contra_right    = p3_45_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.p3_45_ipsi_left       = p3_45_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_45_ipsi_right      = p3_45_ipsi_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.p3_20_contra_left     = p3_20_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_20_contra_right    = p3_20_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.p3_20_ipsi_left       = p3_20_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_20_ipsi_right      = p3_20_ipsi_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.p3_90_contra_left     = p3_90_contra_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_90_contra_right    = p3_90_contra_right{m}(k,:);
    
            UNFOLD{i}{k}{m}.p3_90_ipsi_left       = p3_90_ipsi_left{m}(k,:);
            UNFOLD{i}{k}{m}.p3_90_ipsi_right      = p3_90_ipsi_right{m}(k,:);
        end
    end

end
UNFOLD{end+1} = EEG.times;
save('C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\UNFOLD.mat', 'UNFOLD');
disp(['Rejected data: ' num2str(round(100*mean(rejectedPercentage),2)) '%']);
