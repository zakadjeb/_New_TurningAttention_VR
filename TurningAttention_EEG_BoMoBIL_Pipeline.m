%% Turning Attention MoBI-Pipeline
% Developed and written by Zak Djebbara 2025.
% Find the VR experiment at:
% 'https://github.com/zakadjeb/_New_TurningAttention_VR'
% Find the EEG datasets at:
% 'https://osf.io/92vzx'

%% 1. Loading in the XDF file & ZapLine cleaning
% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% If EEGLAB is not open, then open it + loading in the basic info
if ~exist('EEG','var')
    eeglab;
    pop_editoptions( 'option_storedisk', 0, 'option_savetwofiles', 1, 'option_saveversion6', 0, 'option_single', 0, 'option_memmapdata', 0, 'option_eegobject', 0, 'option_computeica', 1, 'option_scaleicarms', 1, 'option_rememberfolder', 1, 'option_donotusetoolboxes', 0, 'option_checkversion', 1);
end

% Set how many participants to load in
allPartici = 20;

for i = 3:allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG=[]; CURRENTSET=[];
    
    %Setting the individual parameters
%     datapathOrigin = ['C:\Users\zadj\Documents\_Analysis\DataFolder\VP', num2str(i)];
%     datapathForSaving = ['C:\Users\zadj\Documents\_Analysis\DataFolder\Eval\VP', num2str(i)];
    
    % Creating folders if they don't already exist
    if ~exist(datapathSave{i}, 'dir'); mkdir(datapathSave{i}); end
    
    % Loading in the XDF and saving as .set-file
    EEG = pop_loadxdf([datapathOrigin{i}, '.xdf'], 'streamtype', 'EEG');
    [ALLEEG, EEG, CURRENTSET] = pop_newset(ALLEEG, EEG, 0, 'setname', 'RawData');
    EEG = eeg_checkset(EEG); 
    
    % Running Zap-line immediately
    EEG = clean_data_with_zapline_plus_eeglab_wrapper(EEG);
    EEG = pop_saveset(EEG, 'filename', ['RawData_', num2str(i), '.set'], 'filepath', datapathSave{i});
    [ALLEEG, EEG] = eeg_store(ALLEEG, EEG, 0);
    
    disp("// Dataset of participant: " + num2str(i) + " uploaded + cleaned with ZapLine.");
end

%% 2. Removing the break time

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% Set how many participants to load in
allPartici = [1 3:20];

% Identifying breaks and training
for i = allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG=[]; CURRENTSET=[];
    EEG = pop_loadset('filename', ['RawData_', num2str(i), '.set'], 'filepath', datapathSave{i});
    [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG, 0);
    
        % DELETE THIS FOR-LOOP FOR DATASETS NOT MISSING SECOND BREAK
        % Since the pilot dataset is missing 'BreakStart' one is implemented
        % between #159;lastWall and #160;firstWall.
        temp = EEG.event;
        insertEvent.type = 'BreakStart';
        for j = 1:length(EEG.event)
            if startsWith(EEG.event(j).type,'#160')
                if startsWith(EEG.event(j+1).type, 'BreakEnd')
                    disp('Break found!');
                    insertEvent.latency = (EEG.event(j).latency+EEG.event(j+1).latency)/2;
                    insertEvent.duration = 1;
                    EEG.event = [EEG.event(1:j) insertEvent EEG.event(j+1:end)];
                    disp('Break inserted!');
                end
            end
        end
        
    
    % Synchronizing the head position
    
    
    % Finding the start and end of experiment.
    FirstGroup=1;m=1;
    for j = 1:length(EEG.event)
        if strcmp('TrainingDone',EEG.event(j).type)
            expStart = EEG.event(j).latency;
            experimentStartIndex = j;
        end
        if strcmp('ExperimentDone',EEG.event(j).type)
            expEnd = EEG.event(j).latency;
        end
    end
    for j = 1:length(EEG.event)
        if strcmp('BreakStart',EEG.event(j).type) && experimentStartIndex < j
            breakStart{FirstGroup} = EEG.event(j).latency;
            FirstGroup = FirstGroup+1;
        end
        if strcmp('BreakEnd',EEG.event(j).type) && experimentStartIndex < j
            breakEnd{m} = EEG.event(j).latency;
            m = m+1;
        end
    end
    
    % Rejecting the breaks and training.
    lastTimePoint = EEG.pnts/EEG.srate;
    EEG = eeg_eegrej(EEG,...
    [0 expStart;...
    breakStart{1} breakEnd{1};...
    breakStart{2} breakEnd{2};...
    expEnd expEnd*2]);
    
    % Removing the event bug...
     for j = 1:length(EEG.event)
        if j < length(EEG.event)
            if startsWith(EEG.event(j+1).type,'#5') && startsWith(EEG.event(j).type,'#0')
                eventBugIdx = j+1;
            end
        end
    end
    EEG.event(eventBugIdx) = [];
    eeglab redraw
    
    % Saving new dataset
    EEG = pop_saveset(EEG, 'filename', ['RawData_NoBreaks_', num2str(i), '.set'], 'filepath', datapathSave{i});
    
    disp("// Breaks removed from dataset of participant: " + num2str(i));
end

%% 3. ChanLocs, DownSampl, Filt

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% Set how many participants to load in
allPartici = [1 3:20];

% Variables for easy adjustments.
%channelLocation = 'C:\Users\zadj\Documents\_Analysis\EEG_Pipeline\equidistant_waveguard128_duke_ordered.elp';
pathWaveguardRecordingLSL = 'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_LSL\__eegoLSLapp\__eegoLSLapp\RecordingApp\waveguard128_equidistant_withrefgnd.txt';
pathXensorELC = 'C:\Users\zadj\Documents\_Analysis\DataFolder\1_XensorChanLocs.elc';
chanPathWaveguard = 'C:\\Users\\zadj\\Documents\\_Analysis\\EEG_Pipeline\\equidistant_waveguard128_duke_ordered.elc';
chanPathBrainProducts = 'C:\\Users\\zadj\\Documents\\_Analysis\\EEG_Pipeline\\actiCap-snap_MoBI_128.elc';
ICAhighPass = 2.5;
ICAlowPass = 100;
ERPhighPass = 0.2;
ERPlowPass = 40;
downSample = 250;
forICA = ['ICAdataset'];
forERP = ['ERPdataset'];

% This step aims to create two files of the RawData_NoBreaks.set, so that
% one dataset is applicable to ERPs and the other for ICA later on.

% Loading in the RawData_NoBreaks.set
for i = allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = []; RAWEEG = [];
    RAWEEG = pop_loadset('filename', ['RawData_NoBreaks_', num2str(i), '.set'], 'filepath', datapathSave{i});
    RAWEEG = eeg_checkset(RAWEEG);
    [ALLEEG, RAWEEG, CURRENTSET] = eeg_store(ALLEEG, RAWEEG, 0);
    
    % Loading in the channel-locations using the XensorELC()
    % EEG = XensorELC(RAWEEG, pathWaveguardRecordingLSL, pathXensorELC, 'Z7');
    if i == 1
        RAWEEG = pop_chanedit(RAWEEG, 'load',{chanPathWaveguard...
            'filetype' 'autodetect'},'delete',129);
        RAWEEG = eeg_checkset(RAWEEG);
    elseif i ~= 1
        RAWEEG = pop_chanedit(RAWEEG, 'load',{chanPathBrainProducts...
            'filetype' 'autodetect'});
%         bemobil_config.warping_channel_names = {2, 'FTT9h'; 26, 'FTT10h'; 84, 'C5'; 52, 'C6'; 33, 'AFz'; 92, 'POz'; 41, 'Cz'};
        RAWEEG = eeg_checkset(RAWEEG);
    end

    % Downsampling the RawData_NoBreaks to 250 Hz
    RAWEEG = pop_resample(RAWEEG, downSample);
    RAWEEG = eeg_checkset(RAWEEG);
    
    % Filtering for ICA
    ICAEEG = bemobil_filter(ALLEEG,RAWEEG,CURRENTSET,ICAhighPass,ICAlowPass,['RawData_NoBreaks_Resamp_Filt_', forICA, '.set'],datapathSave{i});
    
    % Filtering for ERP
    ERPEEG = bemobil_filter(ALLEEG,RAWEEG,CURRENTSET,ERPhighPass,ERPlowPass,['RawData_NoBreaks_Resamp_Filt_', forERP, '.set'],datapathSave{i});
end

%% 4. (AMICA-Dataset) AutoClean, Interp.BadChans & Re-ref Avg
% This dataset is for the sole purpose of running through AMICA to extract
% the ICA weights and spheres. The other two datasets (ERP & ICA) will
% **not** get cleaned in the same sense. Instead, they will go through
% component rejection.

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% Set how many participants to load in
allPartici = [1 3:20];

% Set parameters
percentageClean = 0.82;
forICA = ['ICAdataset'];
forERP = ['ERPdataset'];

% Loading in the ICA-filtered dataset
for i = allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = [];
    EEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forICA, '.set'], 'filepath', datapathSave{i});
    [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG, 0);
    
     % Automatic rejection
        datapath_specifications.datapath_original_files=datapathSave{i};
		datapath_specifications.datapath_save_files=datapathSave{i};
		datapath_specifications.datapath_save_figures=datapathSave{i};
		
		% specify file names
		filename_specifications.file_name_original_EEG=['RawData_NoBreaks_Resamp_Filt_', forICA, '.set'];
		filename_specifications.filename_saveBadEpochIndices='';
		
        % settings
		automatic_cleaning_settings.cleaned_data_type                       = 'sensor data';
		automatic_cleaning_settings.selected_sensor_channels_for_cleaning   = [];
		automatic_cleaning_settings.chan_select_plot_before_after           = []; 
		automatic_cleaning_settings.band_artifact_cleaning                  = [1 40]; 
		automatic_cleaning_settings.band_stop_artifact_cleaning             = []; 
		automatic_cleaning_settings.band_filtorder                          = 2;
		automatic_cleaning_settings.analyzed_files_N                        = 1;
		automatic_cleaning_settings.crit_all                                = percentageClean;
		automatic_cleaning_settings.wind_ms                                 = 1000;
		automatic_cleaning_settings.crit_keep_sec                           = [];
		automatic_cleaning_settings.crit_percent_sample_epoch               = 0.2;
		automatic_cleaning_settings.weighting_factor_epoch_cleaning_methods = [1 1 2];
		automatic_cleaning_settings.visual_inspection_mode                  = false;

        [auto_continuous_cleaning]=wrapper_automatic_cleaning_continuous_EEG(datapath_specifications,filename_specifications,...
			automatic_cleaning_settings);
        
        EEG.etc.auto_continuous_cleaning = auto_continuous_cleaning;
        
        EEG = add_leading_trailing_samples_FH_cleaning(EEG, 0.49);
		
		invalid_segments_index = EEG.etc.auto_continuous_cleaning.cleaning_buffer.invalid_segments_final_start_stop_sample_buffered;
        
		EEG = eeg_eegrej(EEG, invalid_segments_index);
        EEG = eeg_checkset(EEG);
        EEG = pop_saveset(EEG,'filename',['RawData_NoBreaks_Resamp_Filt_', forICA, '_AutoClean.set'], 'filepath', datapathSave{i});
        EEG = eeg_checkset(EEG);
        
    % Retrieving the bad channels analyzing first the 'spec'
    [~, badChansSpecICA] = pop_rejchan(EEG,'elec',[1:size(EEG.data,1)],'threshold',4,'norm','on','measure','spec');
    EEG = eeg_checkset(EEG);

    % Retrieving the bad channels analyzing then the 'prob'
    [~, badChansProb] = pop_rejchan(EEG,'elec',[1:size(EEG.data,1)],'threshold',4,'norm','on','measure','prob');
    EEG = eeg_checkset(EEG);

    % Retrieving the bad channels analyzing then the 'kurt'
    [~, badChansKurt] = pop_rejchan(EEG,'elec',[1:size(EEG.data,1)],'threshold',4,'norm','on','measure','kurt');
    EEG = eeg_checkset(EEG);

    % Reloading non-rejected set
    badChans = unique([badChansSpecICA badChansProb badChansKurt]);
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = [];
    EEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forICA, '_AutoClean.set'], 'filepath', datapathSave{i});
    [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG, 0);
    EEG.etc.badChans = badChans;

    % Interpolating the bad channels, re-referencing to average.
    [ALLEEG, EEG, CURRENTSET] = bemobil_interp_avref(EEG , ALLEEG, CURRENTSET, badChans,['RawData_NoBreaks_Resamp_Filt_', forICA, '_AutoClean_Interp_AvgRef.set'], datapathSave{i});
    disp("// Re-referenced to average. " + length(badChans) + " channels were removed and interpolated. ");
    disp("// Autocleaning done. Removed " + (100-(percentageClean*100)) + "% of the data.");
end


%% 5. (AMICA-Dataset) Computing AMICA

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% Set how many participants to load in
allPartici = [1 3:20];

% Set parameters
forICA = ['ICAdataset'];
forERP = ['ERPdataset'];

% Loading in the ICA-filtered dataset
for i = allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = [];
    EEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forICA, '_AutoClean_Interp_AvgRef.set'], 'filepath', datapathSave{i});
    [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG, 0);
    
    % Setting the name of the folder
    amica_filename_output = ['AMICA_Participant', num2str(i)];
    
    % If no channels have been rejected, create an empty list so we can
    % calculate the rank.
    if length(EEG.etc.interpolated_channels) <= 0
       EEG.etc.interpolated_channels = [];
    end
    
    rank = EEG.nbchan - 1 - length(EEG.etc.interpolated_channels);
    
    % Running the AMICA
    [ALLEEG EEG CURRENTSET] = bemobil_signal_decomposition(ALLEEG, EEG, ...
        CURRENTSET, true, 1, 4, rank, [], ...
        amica_filename_output, [datapathSave{i}]);
end

%% 6. (Both-Datasets) InterpBadChans, ReRefAvg, ICAtransf

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% Set how many participants to load in
% allPartici = 2;

% Set parameters
forICA = ['ICAdataset'];
forERP = ['ERPdataset'];

% Loading in the datasets
for i = allPartici
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = []; ICAEEG = []; ERPEEG = [];
    ICAEEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forICA, '.set'], 'filepath', datapathSave{i});
    ERPEEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forERP, '.set'], 'filepath', datapathSave{i});
    
    % Retrieving the bad channels analyzing first the 'spec'
    [~, badChansSpecICA] = pop_rejchan(ICAEEG,'elec',[1:size(ICAEEG.data,1)],'threshold',4,'norm','on','measure','spec');
    % ICAEEG = eeg_checkset(ICAEEG);
    [~, badChansSpecERP] = pop_rejchan(ERPEEG,'elec',[1:size(ERPEEG.data,1)],'threshold',4,'norm','on','measure','spec');
    % ERPEEG = eeg_checkset(ERPEEG);

    % Retrieving the bad channels analyzing first the 'kurt'
    [~, badChansKurtICA] = pop_rejchan(ICAEEG,'elec',[1:size(ICAEEG.data,1)],'threshold',4,'norm','on','measure','kurt');
    % ICAEEG = eeg_checkset(ICAEEG);
    [~, badChansKurtERP] = pop_rejchan(ERPEEG,'elec',[1:size(ERPEEG.data,1)],'threshold',4,'norm','on','measure','kurt');
    % ERPEEG = eeg_checkset(ERPEEG);

    % Retrieving the bad channels analyzing then the 'prob'
    [~, badChansProbICA] = pop_rejchan(ICAEEG,'elec',[1:size(ICAEEG.data,1)],'threshold',4,'norm','on','measure','prob');
    % ICAEEG = eeg_checkset(ICAEEG);
    [~, badChansProbERP] = pop_rejchan(ERPEEG,'elec',[1:size(ERPEEG.data,1)],'threshold',4,'norm','on','measure','prob');
    % ERPEEG = eeg_checkset(ERPEEG);

    % Interpolating channels
    badChansICA = unique([badChansSpecICA badChansKurtICA badChansProbICA]);
    badChansERP = unique([badChansSpecERP badChansKurtERP badChansProbERP]);
    % Reloading non-rejected set
    STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG = []; CURRENTSET = []; ICAEEG = []; ERPEEG = [];
    ICAEEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forICA, '.set'], 'filepath', datapathSave{i});
    ERPEEG = pop_loadset('filename', ['RawData_NoBreaks_Resamp_Filt_', forERP, '.set'], 'filepath', datapathSave{i});
    
    % Interpolating the bad channels, re-referencing to average.
    [ALLEEG, ICAEEG, CURRENTSET] = bemobil_interp_avref(ICAEEG , ALLEEG, CURRENTSET, badChansICA,['RawData_NoBreaks_Resamp_Filt_', forICA, '_Interp_AvgRef.set'], datapathSave{i});
    [ALLEEG, ERPEEG, CURRENTSET] = bemobil_interp_avref(ERPEEG , ALLEEG, CURRENTSET, badChansERP,['RawData_NoBreaks_Resamp_Filt_', forERP, '_Interp_AvgRef.set'], datapathSave{i});
    %disp("// Re-referenced to average. " + length(badChans) + " channels were removed and interpolated. ");
    
    % Loading in the ICA weights from ICA-Dataset.
    mods = loadmodout15([datapathSave{i} ['\\AMICA_Participant', num2str(i), '_outfiles']]);
    ICAEEG.icaweights = mods.W;
    ERPEEG.icaweights = mods.W;
    ICAEEG.icasphere = mods.S(1:mods.num_pcs,:);
    ERPEEG.icasphere = mods.S(1:mods.num_pcs,:);
    ICAEEG = eeg_checkset(ICAEEG);
    ERPEEG = eeg_checkset(ERPEEG);
    ICAEEG = pop_saveset(ICAEEG,'filename',['RawData_NoBreaks_Resamp_Filt_', forICA '_NotClean_Interp_AvgRef_ICAweighted.set'],'filepath', datapathSave{i});
    ERPEEG = pop_saveset(ERPEEG,'filename',['RawData_NoBreaks_Resamp_Filt_', forERP '_NotClean_Interp_AvgRef_ICAweighted.set'],'filepath', datapathSave{i});
    
    disp("// ICA-weights transferred.");
end


% % Load study
% [STUDY ALLEEG] = pop_loadstudy('filename', [study_filename '.study'], 'filepath', filepathERSP);
% CURRENTSTUDY = 1; EEG = ALLEEG; CURRENTSET = [1:length(EEG)];

% Colormap
% mycolormap = customcolormap([0 .2 .4 .6 .8 1], {'#845EC2','#D65DB1','#FF6F91','#FF9671','#FFC75F', '#F9F871'});
% mycolormap = customcolormap([0 .2 .4 .6 .8 1], {'#BA6A6A','#A36078','#835B7E','#61577A','#42516C', '#2F4858'});
% mycolormap = customcolormap([0 .2 .4 .6 .8 1], {'#6AB4BA','#57A2C0','#618DBD','#7A75AD','#8F5A8D', '#964262'});
% mycolormap = customcolormap([0 .2 .4 .6 .8 1], {'#446B8E','#596E9A','#726FA1','#8D6EA3', '#A76D9F', '#BE6D97'});
mycolormap = customcolormap([0 .2 .4 .6 .8 1], {'#B36A6A','#9E6076','#805B7B','#605677', '#43506B', '#2F4858'});
% mycolormap = customcolormap([0 .5 1], {'#325F65','#00B08A','#FFF7D6'});
% mycolormap = customcolormap([0 .5 1], {'#FF3CAC','#784BA0','#2B86C5'});

% Parameters
clst_rv = 0.3;
compIdx = [];
xticks = [100:300:1500];
cluster = 4;
FirstGroup = [1];
SecondGroup = [5];
ThirdGroup = [9];

times = ALLEEG(1).etc.analysis.ersp.times;
logfreqs = ALLEEG(1).etc.analysis.ersp.logfreqs;

% STUDY.

% Plot ERSPs
t = tiledlayout('flow');

nexttile(1);
imagesclogy(times,logfreqs, squeezemean(abs(ALLEEG(FirstGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)),1), 'xticks', xticks);
axis xy; colormap(mycolormap);
xlabel('time (ms)'); ylabel('frequency (Hz)');
title(['ERSP of ' ALLEEG(FirstGroup).condition ' Stimulus' ALLEEG(FirstGroup).group '. ' newline num2str(length(STUDY.cluster(cluster).comps)) ' components.']);

nexttile(2);
imagesclogy(times,logfreqs, squeezemean(abs(ALLEEG(SecondGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)),1), 'xticks', xticks);
axis xy; colormap(mycolormap);
xlabel('time (ms)'); ylabel('frequency (Hz)');
title(['ERSP of ' ALLEEG(SecondGroup).condition ' Stimulus' ALLEEG(SecondGroup).group '. ' newline num2str(length(STUDY.cluster(cluster).comps)) ' components.']);

nexttile(3);
imagesclogy(times,logfreqs, squeezemean(abs(ALLEEG(ThirdGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)),1), 'xticks', xticks);
axis xy; colormap(mycolormap);
xlabel('time (ms)'); ylabel('frequency (Hz)');
title(['ERSP of ' ALLEEG(ThirdGroup).condition ' Stimulus' ALLEEG(ThirdGroup).group '. ' newline num2str(length(STUDY.cluster(cluster).comps)) ' components.']);

% Statistics
data = {permute(abs(ALLEEG(FirstGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)), [2 3 1]);...
        permute(abs(ALLEEG(SecondGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)), [2 3 1]);...
        permute(abs(ALLEEG(ThirdGroup).etc.analysis.ersp.ersp(STUDY.cluster(cluster).comps,:,:)), [2 3 1])};
    
% subplot(3,2,4);
nexttile(4);
%[pcond] = statcond(data, 'method','perm','alpha', 0.001);
[pcond] = std_stat(data, 'method','perm','condstats','on','alpha',0.05,'naccu',500);
imagesclogy(times,logfreqs, pcond{1}, 'xticks', xticks);
axis xy; colormap(mycolormap);
xlabel('time (ms)'); ylabel('frequency (Hz)');
title(['t-test']);

set(gcf, 'Position', [100 100 1000 400]);