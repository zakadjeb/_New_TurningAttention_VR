%% Turning Attention Behavioral metrics
% Developed and written by Zak Djebbara 2025.
% Find the VR experiment at:
% 'https://github.com/zakadjeb/_New_TurningAttention_VR'
% Find the EEG datasets at:
% 'https://osf.io/92vzx'

%% 1. Loading in the XDF file
% Run this instead:
% allRTs = load("C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline","allRTs");
% allRTs = allRTs.allRTs

% Loading in the basic info.
TurningAttention_EEG_BaseInfo;

% If EEGLAB is not open, then open it + loading in the basic info
if ~exist('EEG','var')
    eeglab;
%     pop_editoptions( 'option_storedisk', 0, 'option_savetwofiles', 1, 'option_saveversion6', 0, 'option_single', 0, 'option_memmapdata', 0, 'option_eegobject', 0, 'option_computeica', 1, 'option_scaleicarms', 1, 'option_rememberfolder', 1, 'option_donotusetoolboxes', 0, 'option_checkversion', 1);
end

% Set how many participants to load in
allPartici = [1 3:20];
STUDY = []; CURRENTSTUDY = 0; ALLEEG = []; EEG=[]; CURRENTSET=[]; allRTs = []; j = 1;
for i = allPartici
    ALLEEG = []; EEG=[];
    %Setting the individual parameters
%     datapathOrigin = ['C:\Users\zadj\Documents\_Analysis\DataFolder\VP', num2str(i)];
%     datapathForSaving = ['C:\Users\zadj\Documents\_Analysis\DataFolder\Eval\VP', num2str(i)];
    
    % Creating folders if they don't already exist
    if ~exist(datapathSave{i}, 'dir'); mkdir(datapathSave{i}); end
    
    % Loading in the XDF and saving as .set-file
    EEG = pop_loadset('filename', ['RawData_NoBreaks_', num2str(i), '.set'], 'filepath', datapathSave{i});
    if i == 1
        for i2 = 1:length(EEG.event)
            EEG.event(i2).latency = EEG.event(i2).latency + 26;
            allRTs{j} = EEG.event;
        end
    else
        allRTs{j} = EEG.event;
    end
    j = j + 1;
%     EEG.times = 0;
%     EEG.data = 0;
%     [ALLEEG, EEG, CURRENTSET] = eeg_store(ALLEEG, EEG);
    
    disp("// Dataset of participant: " + num2str(i) + " uploaded.");
end

%% 2. Extracting RTs
% Just load this one ...
% load("C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\TurningAttention_behaviorMetrics.mat", "behaviorMetrics")


% Creating the tables
eventNo = [];
partiNo = [];
trialNo = [];
condDeg = [];
turnDir = [];
posWall = [];
stimDir = [];
condDir = [];
difficulty = [];
HitMiss = [];
rt = [];
CTOA = [];
clear behaviorMetrics;

% identifying the conditions and the associated RT
for i3 = 1:length(allRTs)
    for i1 = 1:length(allRTs{i3})
        if contains(allRTs{i3}(i1).type,';Right') || contains(allRTs{i3}(i1).type,';Left')
            Response = []; % Response latency
            Stimulus = []; % Stimulus latency
            eventStr = allRTs{i3}(i1).type; % make copy of string
            Stimulus = allRTs{i3}(i1).latency;

            % find the start time for this trial
            splitTrial = split(allRTs{i3}(i1).type, ';');
            for i2 = 1:length(allRTs{i3})
                if startsWith(allRTs{i3}(i2).type, [splitTrial{1} ';']) &&...
                        contains(allRTs{i3}(i2).type, splitTrial{5}) && ~strcmp(allRTs{i3}(i2).type, allRTs{i3}(i2+1).type) &&...
                        i1 < i2
                    if endsWith(allRTs{i3}(i2).type,'Miss') || endsWith(allRTs{i3}(i2).type,'Hit') %%endsWith(allRTs{i3}(i2).type,'LightsOn') || endsWith(allRTs{i3}(i2).type,'boundary')
                        Response = allRTs{i3}(i2).latency;
                        break
                    end
                end
            end

            if ~isempty(Response)
                if  (Response-Stimulus) > 150 && (Response-Stimulus) < 1000
                    rt = [rt; (Response-Stimulus)/1000];
                    %dbstop in file;
                    % separate the strings for the list
                    eventStr(regexp(allRTs{i3}(i1).type,'[#]')) = [];
                    eventDat = split(eventStr, ';');
                    eventNo = [eventNo; i1];
                    partiNo = [partiNo; i3];
                    trialNo = [trialNo; convertCharsToStrings(eventDat{1})];
                    condDeg = [condDeg; convertCharsToStrings(eventDat{2})];
                    turnDir = [turnDir; convertCharsToStrings(eventDat{3})];
                    posWall = [posWall; convertCharsToStrings(str2double(eventDat{5}(end)))];
                    temp = split(convertCharsToStrings(eventDat{5}), 'l');
                    if endsWith(allRTs{i3}(i2).type,'Hit')
                        HitMiss = [HitMiss; "Hit"];
                    else
                        HitMiss = [HitMiss; "Miss"];
                    end
                    if str2num(temp{3}) >= 4 && str2num(temp{3}) <= 7
                        difficulty = [difficulty; "Hard"];
                    else
                        difficulty = [difficulty; "Easy"];
                    end
                    if contains(convertCharsToStrings(eventDat{3}), convertCharsToStrings(eventDat{6}))
                        condDir = [condDir; "Ipsi"];
                    else
                        condDir = [condDir; "Contra"];
                    end
                    stimDir = [stimDir; convertCharsToStrings(eventDat{6})];
                    % find the prior response and use it as a cue
                    CueTime = [];
                    for i2 = 1:5
                        if i1-i2 > 0
                            if endsWith(allRTs{i3}(i1-i2).type, 'Miss') || endsWith(allRTs{i3}(i1-i2).type, 'Hit')
                                CueTime = allRTs{i3}(i1-i2).latency;
                                CTOA = [CTOA; Stimulus - CueTime];
                                break
                            end
                        end
                    end
                    if isempty(CueTime)
                        CTOA = [CTOA; NaN];
                    end
                else
                    warning(['Did not match conditions at: ' num2str(i1)]);
%                     error('Stop');
                end
            elseif isempty(Response)
                i1 = i1 + 2;
            end
        end
    end
    disp(['Dataset: ' num2str(i3) ' is done.']);
end

behaviorMetrics = array2table([eventNo, partiNo, trialNo, condDeg, turnDir, posWall, stimDir, condDir, difficulty, rt, HitMiss, CTOA],...
    'VariableNames',{'eventNo','partiNo','trialNo', 'condDeg', 'turnDir', 'posWall', 'stimDir', 'condDir', 'difficulty', 'rt', 'HitMiss', 'CTOA'});
behaviorMetrics.posWall(behaviorMetrics.posWall == "0") = "10";
% save("C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\TurningAttention_behaviorMetrics.mat", "behaviorMetrics");

%% PosnerWall-centric
% This analysis serves to show the 4th and 7th walls are significantly
% different from the others.
% load("C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\TurningAttention_behaviorMetrics.mat", "behaviorMetrics")
Participant = [];
Condition = [];
Group = [];
Hits = [];
Wall = [];
RT = [];

whichWalls = 1:10;

condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
condDir = ["Ipsi";"Contra"];
HitMiss = ["Miss";"Hit"];
for i1 = 1:3 % Condition
    for i2 = 1:19 % Participant
        for i3 = whichWalls % Wall
            for i4 = 1:2 % Group
                for i5 = 1:2 % Hits
                    tmpRT = behaviorMetrics.rt(behaviorMetrics.condDeg == condNames{i1} &...
                        behaviorMetrics.posWall == num2str(i3) &...
                        behaviorMetrics.partiNo == num2str(i2) &...
                        behaviorMetrics.condDir == condDir{i4} &...
                        behaviorMetrics.HitMiss == HitMiss{i5});
                    tmpRT = removeNaN(str2double(tmpRT));
                    RT = [RT; mean(tmpRT)];
                    Participant = [Participant; i2];
                    Condition = [Condition; condNames(i1)];
                    Group = [Group; condDir(i4)];
                    Hits = [Hits; i5-1];
                    Wall = [Wall; i3];
                end
            end
        end
    end
end

WallTbl = table(RT,Participant,Condition,Group,Hits,Wall, 'VariableNames',{'RT','Participant','Condition','Group','Hits','Wall'});
WallTbl.Participant = categorical(WallTbl.Participant);
WallTbl.Hits = logical(WallTbl.Hits);
mdl1 = fitlme(WallTbl, 'RT ~ Wall * Condition * Group + (1 | Participant)','DummyVarCoding','effects');
disp(['Rsquared of mdl1: ' num2str(mdl1.Rsquared.Adjusted)]);

mdl2 = fitglme(WallTbl, 'Hits ~ Wall * Condition * Group + (1 | Participant)','Link','logit','Distribution','Binomial','DummyVarCoding','effects');
disp(['Rsquared of mdl2: ' num2str(mdl2.Rsquared.Adjusted)]);

f = figure;
xlabel('fitted'); ylabel('residuals');
yline(0,'-');
hold on
scatter(fitted(mdl1),residuals(mdl1),5,mycmap(3,:),'filled');
f.Color = [1 1 1]; f.Position = [200 200 150 150];
ylim([-0.2 0.2])

clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);
clear cmap
cmap = cell(1,3);
cmap{1} = bemobil_makecmap(mycmap(1:2,:),length(whichWalls));
cmap{2} = bemobil_makecmap(mycmap(3:4,:),length(whichWalls));
cmap{3} = bemobil_makecmap(mycmap(5:6,:),length(whichWalls));

pltCondNames = ["20°";"45°";"90°"];
f = figure; f.Position = [200 200 450 300];
tiledlayout(1,3,'TileSpacing','tight')
allPredicted = predict(mdl1, WallTbl);
meanRTlist = cell(1,3);
for i1 = 1:3
    data = cell(1,length(whichWalls));
    y_hat = [];
    for i2 = whichWalls
        logicalIdx = WallTbl.Condition == condNames{i1} & WallTbl.Wall == i2;
        data{i2} = WallTbl.RT(logicalIdx);
        y_hat = [y_hat, allPredicted(logicalIdx)];
    end
    bemobil_raincloud(data(whichWalls),'showMean',1,'normal',0,'ylim',[0.1 .8],'nexttile',i1, 'xtickslabel',{whichWalls},...
        'cmap',cmap{i1},'title',[pltCondNames{i1}],'ylabel','Reaction time (s)','xlabel','Stimuli',...
        'ScatterSize',5,'alpha',0.5);
    plot(mean(y_hat,1),'k:','LineWidth',2);
    xline([4 7])
    for i2 = whichWalls
        meanRTlist{i1} = [meanRTlist{i1}, data{i2}];
    end
end
% for i1 = 1:3
%     data = cell(1,length(whichWalls));
%     y_hat = [];
%     for i2 = whichWalls
%         logicalIdx = WallTbl.Condition == condNames{i1} & WallTbl.Wall == i2 & WallTbl.Group == "Ipsi";
%         data{i2} = WallTbl.RT(logicalIdx);
%         y_hat = [y_hat, allPredicted(logicalIdx)];
%     end
%     bemobil_raincloud(data(whichWalls),'showMean',1,'normal',0,'ylim',[0.1 .8],'nexttile',i1+3, 'xtickslabel',{whichWalls},...
%         'cmap',cmap{i1},'title',[pltCondNames{i1} ' Ipsi'],'ylabel','Reaction time (s)','xlabel','Stimuli',...
%         'ScatterSize',5,'alpha',0.5);
%     plot(mean(y_hat,1),'k:','LineWidth',2);
%     xline([4 7])
% end

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_Fuller_Overview.pdf','ContentType','vector')

ff = figure; ff.Color = [1 1 1]; ff.Position = [600 200 300 150];
tiledlayout(1,2,'TileSpacing','tight')
nexttile
scatter(response(mdl1),fitted(mdl1),10,mycmap(1,:), "filled")
title(['R^2: ' num2str(mdl1.Rsquared.Ordinary,3)])
nexttile
plotResiduals(mdl1,'probability')

fff = figure; fff.Color = [1 1 1]; fff.Position = [300 300 150 300];
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
data = cell(1,length(whichWalls));
y_hat = [];
for i2 = whichWalls
    for i3 = unique(WallTbl.Participant)'
        logicalIdx = WallTbl.Wall == i2 & WallTbl.Participant == i3;
        data{i2} = [data{i2}; mean(WallTbl.RT(logicalIdx),'omitnan')];
        y_hat = [y_hat; mean(allPredicted(logicalIdx))];
    end
end
bemobil_raincloud(data(whichWalls),'showMean',1,'nexttile',1,'normal',0,'ylim',[0.1 .5], 'xtickslabel',{whichWalls},...
    'cmap',mycmap,'title',['Across all conditions'],'ylabel','Reaction time (s)','xlabel','Stimuli',...
    'ScatterSize',5,'alpha',0.5);
y_hat = reshape(y_hat,19,10);
plot(mean(y_hat,1),'k:','LineWidth',2);
xline([4 7])

% exportgraphics(fff,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_AcrossConds_Overview.pdf','ContentType','vector')

%% Mean x Std plots

condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
plotNames = ["20°";"45°";"90°"];
condDir = ["Ipsi";"Contra"];
cmapNums = [4,6,9];
tbl = table([],[],[],[],[],'VariableNames',{'Participant','Condition','Group','MeanRT','VarRT'});

% Creating colormap
clear colormap
cmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

for i1 = 1:19 % Participants
    for i2 = 1:3 % Condition
        for i3 = 1:2 % Group
            x = double(behaviorMetrics.rt(behaviorMetrics.partiNo == string(i1) & ...
                behaviorMetrics.condDeg == condNames{i2} & ...
                behaviorMetrics.condDir == condDir{i3}));
            tbl = [tbl; table(i1,condNames(i2),condDir(i3), mean(x), std(x),...
                'VariableNames',{'Participant','Condition','Group','MeanRT','VarRT'})];
        end
    end
end

mdl1 = fitlme(tbl,'VarRT ~ MeanRT + Condition + Group + (1 | Participant)');

% Assessing the fit:
f = figure; f.Color = [1 1 1]; f.Position = [200 200 400 200];
tiledlayout(1,2)

nexttile
hold on
for i1 = 1:3
    for i2 = 1:2
        logicalBool = (tbl.Condition == condNames{i1} & tbl.Group == condDir{i2});
        scatter(table2array(tbl(logicalBool,4)),...
            table2array(tbl(logicalBool,5)),...
            10,...
            repmat(cmap(cmapNums(i1),:),sum(logicalBool),1),"filled")
    end
end
xlabel('Reaction time \mu')
ylabel('Reaction time \sigma')
title('Dispersion plot')

nexttile
scatter(response(mdl1),fitted(mdl1),10,cmap(4,:), "filled")
xlabel('Response')
ylabel('Fitted')
title(['R^2: ' num2str(mdl1.Rsquared.Adjusted,3)])

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_Dispersion.pdf','ContentType','vector')

%% Checking for Inhibition of Return

condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
condNamesNums = {20;45;90};
plotNames = ["20°";"45°";"90°"];
condDir = ["Ipsi";"Contra"];
condPhase = ["Hard";"Easy"];
cmapNums = [4,6,9];
tbl = table([],[],[],[],[],[],'VariableNames',{'Participant','Condition','Group','MeanRT','meanCTOA','Phase'});

% Creating colormap
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);

for i1 = 1:19 % Participants
    for i2 = 1:3 % Condition
        for i3 = 1:2 % Group
            for i4 = 1:2 % Phase
                x = double(behaviorMetrics.rt(behaviorMetrics.partiNo == string(i1) & ...
                    behaviorMetrics.condDeg == condNames{i2} & ...
                    behaviorMetrics.condDir == condDir{i3} & ...
                    behaviorMetrics.difficulty == condPhase{i4}));
                y = double(behaviorMetrics.CTOA(behaviorMetrics.partiNo == string(i1) & ...
                    behaviorMetrics.condDeg == condNames{i2} & ...
                    behaviorMetrics.condDir == condDir{i3} & ...
                    behaviorMetrics.difficulty == condPhase{i4}));
                y = y/1000;

                x = x(y < 2); y = y(y < 2);
                % x = bemobil_removeOutliers(x);
                % y = bemobil_removeOutliers(y);
                % tbl = [tbl; table(repmat(i1,length(x),1),repmat(condNames(i2),length(x),1),...
                %     repmat(condDir(i3),length(x),1),repmat(condPhase(i4),length(x),1),...
                %     x, y,... 
                %     'VariableNames',{'Participant','Condition','Group','Phase','MeanRT','meanCTOA'})];
                
                temp = [];
                temp = isnanMatrix([x,y]);
                x = temp(:,1); y = temp(:,2); 

                tbl = [tbl; table(i1,condNamesNums{i2},condDir(i3),condPhase(i4),...
                    mean(x,'omitnan'), mean(y,'omitnan'),... 
                    'VariableNames',{'Participant','Condition','Group','Phase','MeanRT','meanCTOA'})];
            end
        end
    end
end

% Linear mixed effects
tbl.Condition = categorical(tbl.Condition);
tbl.Phase = reordercats(categorical(tbl.Phase),{'Hard','Easy'});
tbl.Group = reordercats(categorical(tbl.Group),{'Ipsi','Contra'});
tbl.Participant = categorical(tbl.Participant);

mdl1 = fitlme(tbl,'meanCTOA ~ MeanRT + Condition + Group + Phase + (1 | Participant)')

% Assessing the fit:
f = figure; f.Color = [1 1 1]; f.Position = [200 50 350 500];
tiledlayout(3,2,"Padding","compact")

for i1 = 1:3 % TurningAngle
    for i2 = 1:2 % Contra/Ipsi
        ax = nexttile;
        for i4 = 1:2 % Hard/Easy
            x = []; y = [];
            for i3 = 1:19
                logicalBool = (tbl.Participant == categorical(i3) & tbl.Condition == categorical(condNamesNums{i1}) &...
                    tbl.Group == categorical(condDir(i2)) & tbl.Phase == categorical(condPhase(i4)));
                xT = table2array(tbl(logicalBool,4));
                yT = table2array(tbl(logicalBool,5));
        
                x = [x; mean(xT,'omitnan')];
                y = [y; mean(yT,'omitnan')];

                % temp = [];
                % temp = isnanMatrix([xT,yT]);
                % x = temp(:,1); y = temp(:,2); 
            end
    
            scatter(x, y, 10,...
                repmat(mycmap((i1*2)-1+(i4-1),:),length(x),1),"filled","MarkerFaceAlpha",1,'Marker',"o");
    
            title([plotNames(i1) + ", " + condDir{i2}])
            xlabel('Response time (ms)')
            ylabel('CTOA (ms)')
            % lsline;
            grid on
            hold on
            
            yline(mean(tbl.meanCTOA,'omitnan'),':','LineWidth',1.5);
    
            % Fit a linear model using polyfit
            [p, S] = polyfit(x, y, 1);  % p contains the coefficients, S has error estimates
            x = 0:0.01:1;
            [yfit, delta] = polyval(p, x, S);
            % [x,I] = sort(x);
            % yfit = yfit(I);
            fill([x, fliplr(x)], [yfit + delta, fliplr(yfit - delta)], mycmap((i1*2)-1+(i4-1),:), 'FaceAlpha', 0.2, 'EdgeColor','none');
            hold on
            plot(x, yfit, 'LineStyle','-','Color', mycmap((i1*2)-1+(i4-1),:), 'LineWidth', 1);  % Red line for linear fit

            xlim([0 1]);
            ylim([0 1.5]);
            legend(ax,{'','','','Hard','','','','Easy'},'Location','southeast');
            legend boxoff
        end
    end
end
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\_InhibitionOfReturn_Model.pdf','ContentType','vector')


% Preparing a new table
tbl = table([],[],[],[],[],[],'VariableNames',{'Participant','Condition','Group','MeanRT','meanCTOA','Phase'});

for i1 = 1:19 % Participants
    for i2 = 1:3 % Condition
        for i3 = 1:2 % Group
            for i4 = 1:2 % Phase
                x = double(behaviorMetrics.rt(behaviorMetrics.partiNo == string(i1) & ...
                    behaviorMetrics.condDeg == condNames{i2} & ...
                    behaviorMetrics.condDir == condDir{i3} & ...
                    behaviorMetrics.difficulty == condPhase{i4}));
                y = double(behaviorMetrics.CTOA(behaviorMetrics.partiNo == string(i1) & ...
                    behaviorMetrics.condDeg == condNames{i2} & ...
                    behaviorMetrics.condDir == condDir{i3} & ...
                    behaviorMetrics.difficulty == condPhase{i4}));
                y = y/1000;

                x = x(y < 1); y = y(y < 1);
                % x = bemobil_removeOutliers(x);
                % y = bemobil_removeOutliers(y);

                temp = [];
                temp = isnanMatrix([x,y]);
                x = temp(:,1); y = temp(:,2); 

                tbl = [tbl; table(repmat(i1,length(x),1),repmat(condNames(i2),length(x),1),...
                    repmat(condDir(i3),length(x),1),repmat(condPhase(i4),length(x),1),...
                    x, y,... 
                    'VariableNames',{'Participant','Condition','Group','Phase','MeanRT','meanCTOA'})];
            end
        end
    end
end

% Computing post-hoc comparisons
f = figure; f.Color = [1 1 1]; f.Position = [550 50 350 500];
tiledlayout(3,2,"Padding","compact"); allStats = [];
counter = 1;
for i1 = 1:3 % TurningAngle   
    for i2 = 1:2 % Contra/Ipsi
        ax = nexttile;
        quickCounter = 1;
        data = cell(1,2);
        for i4 = 1:2 % Hard/Easy
            for i3 = 1:19
                logicalBool = (tbl.Participant == i3 & tbl.Condition == condNames{i1} &...
                    tbl.Group == condDir(i2) & tbl.Phase == condPhase(i4));
                x = table2array(tbl(logicalBool,4));
                y = table2array(tbl(logicalBool,5));

                % x = reshape(mean(reshape(x,2,[])),[],1);
                % y = reshape(mean(reshape(y,2,[])),[],1);
                
                if i4 == 1
                    % data{1} = [data{1}; mean(x(y < mean(tbl.meanCTOA,'omitnan')),'omitnan')];
                    data{1} = [data{1}; mean(x(y < mean(tbl.meanCTOA,'omitnan')),'omitnan') - mean(x(y > mean(tbl.meanCTOA,'omitnan')),'omitnan')];
                elseif i4 == 2
                    % data{3} = [data{3}; mean(x(y < mean(tbl.meanCTOA,'omitnan')),'omitnan')];
                    data{2} = [data{2}; mean(x(y < mean(tbl.meanCTOA,'omitnan')),'omitnan') - mean(x(y > mean(tbl.meanCTOA,'omitnan')),'omitnan')];
                end
            end
        end
        [~, stats] = bbar_raincloud(data,'nexttile',counter,'cmap',[mycmap((i1*2)-1,:);mycmap(i1*2,:);mycmap((i1*2)-1,:);mycmap(i1*2,:)],...
            'stats','wilcoxon','comparison',[1 2],'rmOutlier',0,...
            'xtickslabel',{'Hard','Easy'},...
            'ylim',[-0.2 .2],'StatsYPos',[.15 0],'ylabel','Response time (s)','showMean',1,'showMedian',1,...
            'normal',0,'multcmp','BH','paired',1);
            title(['\DeltaIOR, ' convertStringsToChars(plotNames(i1)) ', ' condDir{i2}])
            counter = counter + 1;
        allStats = [allStats; stats];
    end
end
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\_InhibitionOfReturn.pdf','ContentType','vector')

allStats

% figure;
% scatter(1:1140,predictedValues,10,cmap(4,:), "filled")
% xlabel('Response')
% ylabel('Fitted')
% title(['R^2: ' num2str(mdl1.Rsquared.Adjusted,3)])
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_InhibitionOfReturn.pdf','ContentType','vector')

%% 3a. Creating the mean RT (Hard x Easy)
partiNo = [];
condDeg = [];
difficulty = [];
turningDir = [];
rt = [];
hitList = [];
missList = [];
trialList = [];

condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
difficultyNames = ["Hard";"Easy"];
turningNames = ["Ipsi";"Contra"];
try
    behaviorMetrics.rt = str2double(behaviorMetrics.rt);
catch
    warning('RTs already double.')

end

% Creating colormap
clear colormap
cmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

% Keep trials apart
for i1 = unique(behaviorMetrics.partiNo)'
    tic
    trialNoList = unique(behaviorMetrics.trialNo(behaviorMetrics.partiNo == i1));
    for i2 = 1:length(unique(difficultyNames))
        for i3 = 1:length(trialNoList)
            for i4 = 1:2
                logicalIdx = behaviorMetrics.partiNo == i1 & behaviorMetrics.difficulty == difficultyNames(i2) & behaviorMetrics.trialNo == trialNoList(i3) & behaviorMetrics.condDir == turningNames(i4);
                if ~isnan(mean(behaviorMetrics.rt(logicalIdx)))
                    rt = [rt; mean(behaviorMetrics.rt(logicalIdx),'omitnan')];
                    partiNo = [partiNo; i1];
                    trialList = [trialList; trialNoList(i3)];
                    difficulty = [difficulty; difficultyNames(i2)];
                    turningDir = [turningDir; turningNames(i4)];
                    tmpcondDeg = behaviorMetrics.condDeg(logicalIdx);
                    condDeg = [condDeg; tmpcondDeg(1)];
                    hitList = [hitList; sum(count(behaviorMetrics.HitMiss(logicalIdx),"Hit"))];
                    missList = [missList; sum(count(behaviorMetrics.HitMiss(logicalIdx),"Miss"))];
                    
                end
            end
        end
    end
    disp(['It took ' num2str(toc) ' secs for participant ' convertStringsToChars(i1) '.']);
end
avgBehaviorMetrics = table(partiNo, trialList, condDeg, difficulty, rt, hitList, missList, turningDir);

% Averaging over trials too
partiNo = [];
condDeg = [];
difficulty = [];
rt = [];
hitList = [];
missList = [];
turningDir = [];

for i1 = 1:19
    tic
    for i2 = 1:length(unique(difficultyNames))
        for i3 = 1:length(condNames)
            for i4 = 1:2
                logicalIdx = avgBehaviorMetrics.partiNo == num2str(i1) &...
                    avgBehaviorMetrics.difficulty == difficultyNames(i2) &...
                    avgBehaviorMetrics.condDeg == condNames(i3) &...
                    avgBehaviorMetrics.turningDir == turningNames(i4);
                rt = [rt; mean(avgBehaviorMetrics.rt(logicalIdx),'omitnan')];
                partiNo = [partiNo; i1];
                difficulty = [difficulty; difficultyNames(i2)];
                condDeg = [condDeg; condNames(i3)];
                hitList = [hitList; mean(avgBehaviorMetrics.hitList(logicalIdx),'omitnan')];
                missList = [missList; mean(avgBehaviorMetrics.missList(logicalIdx),'omitnan')];
                turningDir = [turningDir; turningNames(i4)];
            end
        end
    end
    disp(['Participant ' num2str(i1) '. ' num2str(toc)]);
end
avgBehaviorMetrics = table(partiNo, condDeg, turningDir, difficulty, rt, hitList, missList);

disp('Done averaging');

% Linear mixed effects
tmpavgBehaviorMetrics = avgBehaviorMetrics;
tmpavgBehaviorMetrics.condDeg(tmpavgBehaviorMetrics.condDeg == "TwentyDegs") = 20;
tmpavgBehaviorMetrics.condDeg(tmpavgBehaviorMetrics.condDeg == "FortyfiveDegs") = 45;
tmpavgBehaviorMetrics.condDeg(tmpavgBehaviorMetrics.condDeg == "NinetyDegs") = 90;
tmpavgBehaviorMetrics.condDeg = double(tmpavgBehaviorMetrics.condDeg);

mdl         = fitlme(tmpavgBehaviorMetrics, 'rt ~ -1 + condDeg * difficulty * turningDir + (1 | partiNo)');
mdl2        = fitlme(tmpavgBehaviorMetrics, 'hitList ~ -1 + condDeg * difficulty * turningDir + (1 | partiNo)');
anovaTbl    = anova(mdl);
anovaTbl2   = anova(mdl2);
disp(['RT model explained ' num2str(mdl.Rsquared.Adjusted*100,3) '% of the variance.']);
disp(['Hit/Miss model explained ' num2str(mdl2.Rsquared.Adjusted*100,3) '% of the variance.']);

% Computing the partial eta-squared
anovaTbl = bbar_partialEta(anovaTbl)
anovaTbl2 = bbar_partialEta(anovaTbl2)

% Diagnostics for RT model
f = figure;
xlabel('fitted'); ylabel('residuals');
yline(0,'-');
hold on
scatter(fitted(mdl),residuals(mdl),5,mycmap(3,:),'filled');
f.Color = [1 1 1]; f.Position = [200 200 150 150];
ylim([-0.2 0.2])

% Diagnostics for Hit/Miss model
f = figure;
xlabel('fitted'); ylabel('residuals');
yline(0,'-');
hold on
scatter(fitted(mdl2),residuals(mdl2),5,mycmap(3,:),'filled');
f.Color = [1 1 1]; f.Position = [400 200 150 150];
ylim([-1 1])

% Color map
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);

% Creating prediction plot for RTs
degreesTurn = 120;
f = figure; f.Color = [1 1 1]; f.Position = [200 200 150 300];
nexttile;
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Hard",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(4,:),'FaceAlpha',0.1,'EdgeColor','none');
p1 = plot(y_hat_list,'Color',cmap(4,:),'LineWidth',1);
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Easy",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(9,:),'FaceAlpha',0.1,'EdgeColor','none');
p2 = plot(y_hat_list,'Color',cmap(9,:),'LineWidth',1);

data = cell(1,6);
data{1} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Hard");
data{2} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.difficulty == "Hard");
data{3} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.difficulty == "Hard");
data{4} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Easy");
data{5} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.difficulty == "Easy");
data{6} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.difficulty == "Easy");
boxchart(repmat(18,size(data{1})),data{1},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(43,size(data{2})),data{2},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(88,size(data{3})),data{3},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(22,size(data{4})),data{4},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(47,size(data{5})),data{5},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(92,size(data{6})),data{6},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
ylim([0.2 .5])
xlim([0 degreesTurn]);
xlabel('Turning degree (°)')
ylabel('Reaction time (s)')
xticks([20, 45, 90])
title(['Fitted model' newline 'Reaction times'])
lg = legend([p1,p2],'Turning','Straight','Location','north');
legend boxoff
lg.LineWidth = 0.5;
lg.ItemTokenSize = [10, 1]; % Reduce line length

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_Fitted_Model_Conds.pdf','ContentType','vector')

% Creating prediction plot for Hits/Miss
f = figure; f.Color = [1 1 1]; f.Position = [200 200 150 300];
nexttile;
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Hard",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl2,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
y_hat_list = y_hat_list./4;
ci_y_hat_list = ci_y_hat_list./4;
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(4,:),'FaceAlpha',0.1,'EdgeColor','none');
p1 = plot(y_hat_list,'Color',cmap(4,:),'LineWidth',1);
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Easy",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl2,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
y_hat_list = y_hat_list./4;
ci_y_hat_list = ci_y_hat_list./4;
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(9,:),'FaceAlpha',0.1,'EdgeColor','none');
p2 = plot(y_hat_list,'Color',cmap(9,:),'LineWidth',1);

data = cell(1,6);
data{1} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Hard")./4;
data{2} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.difficulty == "Hard")./4;
data{3} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.difficulty == "Hard")./4;
data{4} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.difficulty == "Easy")./4;
data{5} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.difficulty == "Easy")./4;
data{6} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.difficulty == "Easy")./4;
boxchart(repmat(18,size(data{1})),data{1},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(43,size(data{2})),data{2},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(88,size(data{3})),data{3},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(22,size(data{4})),data{4},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(47,size(data{5})),data{5},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(92,size(data{6})),data{6},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
ylim([0 1])
xlim([0 degreesTurn]);
xlabel('Turning degree (°)')
ylabel('Correct responses/trial')
xticks([20, 45, 90])
title(['Fitted model' newline 'Correct responses'])
lg = legend([p1,p2],'Turning','Straight','Location','north');
legend boxoff
lg.LineWidth = 0.5;
lg.ItemTokenSize = [10, 1]; % Reduce line length

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_Fitted_Model_Hits.pdf','ContentType','vector')

%% 3b. Plotting results (Hard x Easy)
% Creating colormap
clear colormap
cmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

% Creating the plotnames
plotDifficultyName = ["Turning","Straight"];
ylabelName = {'Reaction time (s)';'';''};

% Plotting
f = figure;
tiledlayout(1,2,'TileSpacing','tight');
f.Position = [200 200 300 150]; allStats = cell(1,2);
for i2 = 1:length(difficultyNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    difficultyNames = ["Hard";"Easy"];
    j = 1;

    for i1 = 1:length(condNames)
            data{j} = avgBehaviorMetrics.rt(avgBehaviorMetrics.condDeg == condNames(i1) & ...
                 avgBehaviorMetrics.difficulty == difficultyNames(i2));
            j = j + 1;
    end

    if length(data{1}) > 19
        for i1 = 1:size(data,2)
            data{i1} = mean(reshape(data{i1},[],2),2);
        end
    end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~,stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','paired',0,'comparison',[1 2;2 3;1 3],...
        'xtickslabels',{newCondNames{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'cmap',cmap([4,6,9],:),'multcmp','BH','title',[char(plotDifficultyName(i2))],...
        'showMean',1,'showMedian',1,'ylim',[0.2 .6],'StatsYPos',[.48 0.06],'showInteraction',1);
    allStats{i2} = stats;
end
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_HardXEasy_RT.pdf','ContentType','vector')

%% 3c. Plotting results: Hard x Easy for each Degree
f = figure;
tiledlayout(1,3,'TileSpacing','tight');
f.Position = [200 200 450 150];
allStats = cell(1,3);

% Creating colormap
    clear colormap
    mycmap = bemobil_makecmap([ ...
        hex2rgb('#3F80CF')/255; ...
        hex2rgb('#22327B')/255; ...
        hex2rgb('#03071E')/255; ...
        hex2rgb('#D00000')/255; ...
        hex2rgb('#FAA307')/255; ...
        ],10);
    mycmap = mycmap([4,1,6,7,9,10],:);

    % Creating the plotnames
    plotDifficultyName = ["Turning","Straight"];
    ylabelName = {'Reaction time (s)';'';''};

k = 1;
for i2 = 1:length(condNames)
    clear data
%     rtUB = .7; % Upper bound on RTs
%     rtLB = 0; % Lower bound on RTs
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    difficultyNames = ["Hard";"Easy"];
    j = 1;

%     I = find(avgBehaviorMetrics.rt < rtLB);
%     avgBehaviorMetrics(I,:).rt = repmat(NaN,length(I),1);
%     I2 = find(avgBehaviorMetrics.rt > rtUB);
%     avgBehaviorMetrics(I2,:).rt = repmat(NaN,length(I2),1);
    for i1 = 1:length(difficultyNames)
            tmp = avgBehaviorMetrics.rt(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                 avgBehaviorMetrics.difficulty == difficultyNames(i1));
            data{j} = mean(reshape(tmp,2,[]),1)';
            % data{j} = avgBehaviorMetrics.rt(avgBehaviorMetrics.condDeg == condNames(i2) & ...
            %      avgBehaviorMetrics.difficulty == difficultyNames(i1));
            j = j + 1;
    end
    
    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~, stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','paired',1,'comparison',[1 2],'Bandwidth',.04,...
        'xtickslabels',{plotDifficultyName{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap(k:k+1,:),'multcmp',{'BY',3}, 'writeMean',0,'title',[char(newCondNames(i2))],...
        'showMean',1,'showMedian',1,'ylim',[0.2 0.47],'showInteraction',1,'StatsYPos',[0.45 0.1]);
    allStats{i2} = stats;
    k = k + 2;
end
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_ConditionXHardEasy_RT.pdf','ContentType','vector')

%% 3c. Plotting success/failure (Hard x Easy for each Degree)

% Performing a global chi2 test
[tbl,chi2,p,labels] = crosstab(behaviorMetrics.condDeg, behaviorMetrics.HitMiss, behaviorMetrics.difficulty);
if p < 0.05; disp('Chi-square test: Significance reached!'); end

clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],6);

[tbl,chi2,p,labels] = crosstab(behaviorMetrics.condDeg,...
        behaviorMetrics.HitMiss,...
        behaviorMetrics.difficulty,...
        behaviorMetrics.partiNo);

fullMatrix = [];
for i = 1:size(tbl,4)
    % Performing contrasts
    tmpMatrix = [...
        tbl(2,:,1,i);... % 20 Easy
        tbl(2,:,2,i);... % 20 Hard
        tbl(1,:,1,i);... % 45 Easy
        tbl(1,:,2,i);... % 45 Hard
        tbl(3,:,1,i);... % 90 Easy
        tbl(3,:,2,i);... % 90 Hard
        ];
    fullMatrix(:,:,i) = tmpMatrix;
end
fullMatrix = mean(fullMatrix,3);

% Plotting
allStats = [];
f = figure;
tiledlayout(1,2);f.Position = [200 200 300 150];
f.Color = [1 1 1];
clear data
data{1} = fullMatrix(2,:);
data{2} = fullMatrix(4,:);
data{3} = fullMatrix(6,:);
[~, tmpStats] = bemobil_barplot(data,'nexttile',1,'comparison',[1 2;1 3;2 3],'xtickslabels',{'20°','40°','90°'},'stats','chi2',...
    'multcmp','bonferroni','title','Hard Phase','ylim',[0 650],'StatsYPos',[450 90],'legendBox',0,'legend',{'Hit','Miss'},...
    'cmap',mycmap([2,5],:));
allStats = [allStats; tmpStats];

clear data
data{1} = fullMatrix(1,:);
data{2} = fullMatrix(3,:);
data{3} = fullMatrix(5,:);
[~, tmpStats] = bemobil_barplot(data,'nexttile',1,'comparison',[1 2;1 3;2 3],'xtickslabels',{'20°','40°','90°'},'stats','chi2',...
    'multcmp','bonferroni','title','Easy Phase','ylim',[0 650],'StatsYPos',[450 90],...
    'cmap',mycmap([2,5],:));
allStats = [allStats; tmpStats];
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_Chi2_HitMiss_HardEasy.pdf','ContentType','vector')

f = figure;
tiledlayout(1,3,'TileSpacing','compact')
f.Position = [200 200 450 150];
f.Color = [1 1 1];
titles = ({'20°','45°','90°'});
k = 1;
for i = 1:2:6
clear data
data{1} = fullMatrix(i,:);
data{2} = fullMatrix(i+1,:);
[~, tmpStats] = bemobil_barplot(data,'nexttile',1,'comparison',[1 2],'xtickslabels',{'Hard','Easy'},'stats','chi2',...
    'multcmp','bonferroni','title',titles{k},...
    'ylim',[0 500],'cmap',mycmap([2,5],:),'StatsYPos',[450 2]);
k = k + 1;
allStats = [allStats; tmpStats];
end
legend('Hit','Miss')
legend('boxoff')
legend('location','east')
% exportgraphics(gcf,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_Chi2_HitMiss_Conditions.pdf','ContentType','vector')

%% 3d. Plotting Hit/Miss (Hard x Easy for each Degree)

f = figure;
tiledlayout(1,3,'TileSpacing','tight');
f.Position = [200 200 450 150];
f.Color = [1 1 1];
allStats = cell(1,3);
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);

plotDifficultyName = ["Turning","Straight"];
ylabelName = {'Mean correct/trial';'';''};

k = 1;
for i2 = 1:length(condNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    difficultyNames = ["Hard";"Easy"];
    j = 1;

    for i1 = 1:length(difficultyNames)
        if i1 == 1
            % data{j} = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                 % avgBehaviorMetrics.difficulty == difficultyNames(i1))./4;
             tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
             avgBehaviorMetrics.difficulty == difficultyNames(i1))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        elseif i1 == 2
            % data{j} = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
            %      avgBehaviorMetrics.difficulty == difficultyNames(i1))./4;
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                 avgBehaviorMetrics.difficulty == difficultyNames(i1))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        end
    end
    
    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~, stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','comparison',[1 2],'Bandwidth',.04,...
        'xtickslabels',{plotDifficultyName{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap(k:k+1,:),'multcmp',{'BH',3}, 'writeMean',0,'title',[char(newCondNames(i2))],...
        'showMean',1,'showMedian',1,'ylim',[0 1.2],'StatsYPos',[1.1 0.1],'paired',1,'showInteraction',1);
    k = k + 2;
    allStats{i2} = stats;
end
allStats

% exportgraphics(gcf,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_Wilcoxon_HitMiss_Conditions.pdf','ContentType','vector')

%% 3e. Plotting Hit/Miss (Hard x Easy for each Degree)

f = figure;
tiledlayout(1,2,'TileSpacing','tight');
allStats = cell(1,2);
f.Position = [200 200 300 150];
f.Color = [1 1 1];
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
k = 1;

plotDifficultyName = ["Turning","Straight"];
ylabelName = {'Mean correct/trial';'';''};

for i2 = 1:length(difficultyNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    difficultyNames = ["Hard";"Easy"];
    j = 1;

    for i1 = 1:length(condNames)
        if i2 == 1
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i1) & ...
                 avgBehaviorMetrics.difficulty == difficultyNames(i2))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        elseif i2 == 2
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i1) & ...
                 avgBehaviorMetrics.difficulty == difficultyNames(i2))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        end
    end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~, stats] = bbar_raincloud(data,'nexttile',i2,'stats','ttest','comparison',[1 2; 2 3; 1 3],'StatsYPos',[1.2 0.25],...
        'xtickslabels',{newCondNames{:}},'ylabel',ylabelName{i2},'Normal',0,'paired',0,...
        'Scatter',1,'multcmp','BH', 'writeMean',0,'title',[char(plotDifficultyName(i2))],...
        'showMean',1,'showMedian',1,'ylim',[0 1.8],'showInteraction',1,'cmap',mycmap([4,6,9],:));
    k = k + 1;
    allStats{i2} = stats;
end
% exportgraphics(gcf,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_Wilcoxon_HitMiss_HardEasy.pdf','ContentType','vector')

%% Creating the mean RT (Hard vs. Ipsi x Contra)
% Here, we're filtering out the "Easy" phases of the turn, which
% corresponds to the parts where the participant is walking up towards the
% turn, and the part where they have made the actual turn. Instead, we only
% analyze the "Hard" part of the turn, ie. where they actually twist the
% body.

% Color map
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);

% Creating prediction plot for RTs
degreesTurn = 120;
f = figure; f.Color = [1 1 1]; f.Position = [200 200 150 300];
nexttile;
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Contra",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl,tmpTbl,'Prediction','curve','Simultaneous',0, 'Conditional', true, 'Alpha', 0.05, 'DFMethod', 'residual');
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(4,:),'FaceAlpha',0.1,'EdgeColor','none');
p1 = plot(y_hat_list,'Color',cmap(4,:),'LineWidth',1);
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Ipsi",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl,tmpTbl,'Prediction','curve','Simultaneous',0, 'Conditional', true, 'Alpha', 0.05, 'DFMethod', 'residual');
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(9,:),'FaceAlpha',0.1,'EdgeColor','none');
p2 = plot(y_hat_list,'Color',cmap(9,:),'LineWidth',1);

data = cell(1,6);
data{1} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Contra");
data{2} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.turningDir == "Contra");
data{3} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.turningDir == "Contra");
data{4} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Ipsi");
data{5} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.turningDir == "Ipsi");
data{6} = tmpavgBehaviorMetrics.rt(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.turningDir == "Ipsi");
boxchart(repmat(18,size(data{1})),data{1},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(43,size(data{2})),data{2},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(88,size(data{3})),data{3},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(22,size(data{4})),data{4},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(47,size(data{5})),data{5},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(92,size(data{6})),data{6},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
ylim([0.2 .5])
xlim([0 degreesTurn]);
xlabel('Turning degree (°)')
ylabel('Reaction time (s)')
xticks([20, 45, 90])
title(['Fitted model' newline 'Reaction times'])
lg = legend([p1,p2],'Incongruent','Congruent','Location','north');
legend boxoff
lg.LineWidth = 0.5;
lg.ItemTokenSize = [10, 1]; % Reduce line length

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RT_Fitted_Model_Lateral.pdf','ContentType','vector')

% Creating prediction plot for CRs
degreesTurn = 120;
f = figure; f.Color = [1 1 1]; f.Position = [400 200 150 300];
nexttile;
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Contra",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl2,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
y_hat_list = y_hat_list./4;
ci_y_hat_list = ci_y_hat_list./4;
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(4,:),'FaceAlpha',0.1,'EdgeColor','none');
p1 = plot(y_hat_list,'Color',cmap(4,:),'LineWidth',1);
hold on
tmpTbl = tmpavgBehaviorMetrics(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Ipsi",:);
y_hat_list = []; ci_y_hat_list = [];
for i = 1:degreesTurn
    tmpTbl.condDeg(:) = i;
    [y_hat, ci_y_hat] = predict(mdl2,tmpTbl,'Prediction','curve','Simultaneous',0);
    y_hat = mean(reshape(y_hat,2,[]),"all");
    y_hat_list = [y_hat_list; y_hat];
    ci_y_hat_list = [ci_y_hat_list; mean(reshape(ci_y_hat(:,1),2,[]),"all"), mean(reshape(ci_y_hat(:,2),2,[]),"all")];
end
y_hat_list = y_hat_list./4;
ci_y_hat_list = ci_y_hat_list./4;
patch([1:degreesTurn fliplr(1:degreesTurn)],[ci_y_hat_list(:,1)' fliplr(ci_y_hat_list(:,2)')],cmap(9,:),'FaceAlpha',0.1,'EdgeColor','none');
p2 = plot(y_hat_list,'Color',cmap(9,:),'LineWidth',1);

data = cell(1,6);
data{1} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Contra")./4;
data{2} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.turningDir == "Contra")./4;
data{3} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.turningDir == "Contra")./4;
data{4} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 20 & tmpavgBehaviorMetrics.turningDir == "Ipsi")./4;
data{5} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 45 & tmpavgBehaviorMetrics.turningDir == "Ipsi")./4;
data{6} = tmpavgBehaviorMetrics.hitList(tmpavgBehaviorMetrics.condDeg == 90 & tmpavgBehaviorMetrics.turningDir == "Ipsi")./4;
boxchart(repmat(18,size(data{1})),data{1},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(43,size(data{2})),data{2},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(88,size(data{3})),data{3},'BoxFaceColor',cmap(4,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(22,size(data{4})),data{4},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(47,size(data{5})),data{5},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
boxchart(repmat(92,size(data{6})),data{6},'BoxFaceColor',cmap(9,:),'MarkerStyle','none','BoxWidth',10)
ylim([0 1.2])
xlim([0 degreesTurn]);
xlabel('Turning degree (°)')
ylabel('Correct responses/trial')
xticks([20, 45, 90])
title(['Fitted model' newline 'Correct responses'])
lg = legend([p1,p2],'Incongruent','Congruent','Location','north');
legend boxoff
lg.LineWidth = 0.5;
lg.ItemTokenSize = [10, 1]; % Reduce line length

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_CRs_Fitted_Model_Lateral.pdf','ContentType','vector')

%% 4b. Plotting results (Hard vs. Ipsi x Contra)
f = figure;
tiledlayout(1,2,'TileSpacing','compact');
f.Position = [200 200 300 150];
f.Color = [1 1 1];

clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

ylabelName = {'Reaction time (s)';'';''};
plotCongruenceNames = ["Congruent";"Incongruent"];

statsfull = [];
for i2 = 1:length(difficultyNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    condDir = ["Ipsi";"Contra"];
    j = 1;

    % I = find(avgBehaviorMetrics.rt < rtLB);
    % avgBehaviorMetrics(I,:).rt = NaN(length(I),1);
    % I2 = find(avgBehaviorMetrics.rt > rtUB);
    % avgBehaviorMetrics(I2,:).rt = NaN(length(I2),1);
    for i1 = 1:length(condNames)
        % for i2 = 1:length(difficultyNames)
            tmp = avgBehaviorMetrics.rt(avgBehaviorMetrics.condDeg == condNames(i1) & ...
                avgBehaviorMetrics.turningDir == condDir(i2));
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        % end
    end

    % Creating colormap
    % colormap = bemobil_makecmap([hex2rgb('3a193b')/255; hex2rgb('c5223d')/255; hex2rgb('3c634f')/255], length(data));

    % Remove outliers again
    % for i = 1:length(data)
    %     [data{i}, ~, nrm] = removeOutliers(data{i},3,1);
    %     disp(['Removed: ' num2str(nrm)]);
    % end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~,stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','comparison',[1 2;2 3;1 3],...
        'xtickslabels',{newCondNames{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap([4,6,9],:),'multcmp','BH', 'writeMean',0,'Bandwidth',.04,'title',...
        char(plotCongruenceNames(i2)),'paired',0,'StatsYPos',[.5 0.05],...
        'showMean',1,'showMedian',1,'ylim',[0.1 0.6],'showInteraction',1);
    statsfull = [statsfull;stats];
end
statsfull

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RTs_IpsiContra.pdf','ContentType','vector')

% Compare the variance of the response time

%% 4b. Plotting results (Hard vs. Ipsi x Contra)
f = figure;
tiledlayout(1,3,'TileSpacing','tight');
f.Position = [200 200 450 150];
f.Color = [1 1 1];
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);

ylabelName = {'Reaction time (s)';'';''};
plotCongruenceNames = ["Congr.";"Incongr."];

k = 1;
statsfull = [];
for i2 = 1:length(condNames)
    clear data
    % rtUB = 0.9; % Upper bound on RTs
    % rtLB = 0; % Lower bound on RTs
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    condDir = ["Ipsi";"Contra"];
    j = 1;

    % I = find(avgBehaviorMetrics.rt < rtLB);
    % avgBehaviorMetrics(I,:).rt = NaN(length(I),1);
    % I2 = find(avgBehaviorMetrics.rt > rtUB);
    % avgBehaviorMetrics(I2,:).rt = NaN(length(I2),1);
    for i1 = 1:length(condDir)
        % for i2 = 1:length(difficultyNames)
            tmp = avgBehaviorMetrics.rt(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                avgBehaviorMetrics.turningDir == condDir(i1));
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        % end
    end

    % Creating colormap
%     colormap = bemobil_makecmap([hex2rgb('3a193b')/255; hex2rgb('c5223d')/255; hex2rgb('3c634f')/255], length(data));

    % Remove outliers 
    % for i = 1:length(data)
    %     [data{i}, ~, nrm] = removeOutliers(data{i});
    %     disp(['Removed: ' num2str(nrm)]);
    % end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~,stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','paired',0,'comparison',[1 2],...
        'xtickslabels',{plotCongruenceNames{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap(k:k+1,:),'multcmp',{'BH',3}, 'writeMedian',0,'title',...
        [char(newCondNames(i2))],'StatsYPos',[0.5 0.1],...
        'showMean',1,'showMedian',1,'ylim',[0.1 .55],'showInteraction',1);
    statsfull = [statsfull;stats];
    k = k + 2;
end
statsfull
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_RTs_IpsiContra_Conditions.pdf','ContentType','vector')

%% 4C. Plotting results (Mean CRs: Ipsi x Contra)
f = figure;
tiledlayout(1,3,'TileSpacing','tight');
f.Position = [200 200 450 150];
f.Color = [1 1 1];
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);
mycmap = mycmap([4,1,6,7,9,10],:);
k = 1;

ylabelName = {'Mean correct/trial';'';''};
plotCongruenceNames = ["Congr.";"Incongr."];

statsfull = [];
for i2 = 1:length(condNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    condDir = ["Ipsi";"Contra"];
    j = 1;

    for i1 = 1:length(difficultyNames)
        if i1 == 1
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                 avgBehaviorMetrics.turningDir == condDir(i1))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        elseif i1 == 2
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i2) & ...
                 avgBehaviorMetrics.turningDir == condDir(i1))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        end
    end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~,stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','paired',1,'comparison',[1 2],...
        'xtickslabels',{plotCongruenceNames{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap(k:k+1,:),'multcmp',{'bonferroni',3}, 'writeMedian',0,'title',...
        [char(newCondNames(i2))],'StatsYPos',[1.1 0.1],...
        'showMean',1,'showMedian',1,'ylim',[0 1.2],'showInteraction',1);
    statsfull = [statsfull;stats];
    k = k + 2;
end

% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_CRs_IpsiContra_Conditions.pdf','ContentType','vector')

%% 4C. Plotting results (Mean CRs: Ipsi x Contra)
f = figure;
tiledlayout(1,2,'TileSpacing','tight');
f.Position = [200 200 300 150];
f.Color = [1 1 1];

clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

ylabelName = {'Mean correct/trial';'';''};
plotCongruenceNames = ["Congruent";"Incongruent"];

statsfull = [];
for i2 = 1:length(difficultyNames)
    clear data
    condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
    condDir = ["Ipsi";"Contra"];
    j = 1;

    for i1 = 1:length(condNames)
        % for i2 = 1:length(difficultyNames)
            tmp = avgBehaviorMetrics.hitList(avgBehaviorMetrics.condDeg == condNames(i1) & ...
                avgBehaviorMetrics.turningDir == condDir(i2))./3;
            data{j} = mean(reshape(tmp,2,[]),1)';
            j = j + 1;
        % end
    end

    newCondNames = [["20" + char(176)];...
        ["45" + char(176)];...
        ["90" + char(176)]];
    [~,stats] = bbar_raincloud(data,'nexttile',i2,'stats','wilcoxon','comparison',[1 2;2 3;1 3],...
        'xtickslabels',{newCondNames{:}},'ylabel',ylabelName{i2},'Normal',0,...
        'Scatter',1,'cmap',mycmap([4,6,9],:),'multcmp','BH', 'writeMean',0,'Bandwidth',.04,'title',...
        [char(plotCongruenceNames(i2))],'paired',1,'StatsYPos',[1.1 0.25],...
        'showMean',1,'showMedian',1,'ylim',[0 1.7],'showInteraction',1);
    statsfull = [statsfull;stats];
end
statsfull
% exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_CRs_IpsiContra_.pdf','ContentType','vector')

%% 4c. Plotting success/failure (Hard vs. Ipsi x Contra)
% Creating colormap
clear colormap
mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],6);

% Performing a global chi2 test
[tbl,chi2,p,labels] = crosstab(behaviorMetrics.condDeg, behaviorMetrics.HitMiss, behaviorMetrics.condDir, behaviorMetrics.partiNo);
if p < 0.05; disp('Chi-square test: Significance reached!'); end

% Computed as accumulated
[tbl,chi2,p,labels] = crosstab(behaviorMetrics.condDeg,...
        behaviorMetrics.HitMiss,...
        behaviorMetrics.condDir);
tbl = tbl./19;

% Performing contrasts
fullMatrix = [tbl(2,:,1);... % 20 Ipsi
    tbl(2,:,2);... % 20 Contra
    tbl(1,:,1);... % 45 Ipsi
    tbl(1,:,2);... % 45 Contra
    tbl(3,:,1);... % 90 Ipsi
    tbl(3,:,2);... % 90 Contra
    ];

% Plotting
f = figure;
tiledlayout(1,2);
clear data
data{1} = fullMatrix(2,:);
data{2} = fullMatrix(4,:);
data{3} = fullMatrix(6,:);
bemobil_barplot(data,'nexttile',1,'comparison',[1 2;1 3;2 3],'xtickslabels',{'20°','40°','90°'},'stats','chi2',...
    'multcmp','hommel','title','Contralateral','cmap',mycmap([2,5],:),'ylim',[0 700],'StatsYPos', [430 100],...
    'ylabel','Occurences (Normalized)');

clear data
data{1} = fullMatrix(1,:);
data{2} = fullMatrix(3,:);
data{3} = fullMatrix(5,:);
bemobil_barplot(data,'nexttile',1,'comparison',[1 2;1 3;2 3],'xtickslabels',{'20°','40°','90°'},'stats','chi2',...
    'multcmp','hommel','title','Ipsilateral','cmap',mycmap([2,5],:),...
    'ylim',[0 700],'StatsYPos', [430 100],'ylabel','Occurences (Normalized)');
f.Position = [200 200 300 150];
f.Color = [1 1 1];
exportgraphics(f,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_HitMiss_IpsiContra.pdf','ContentType','vector')

ff = figure;
tiledlayout(1,3,'TileSpacing','compact')
titles = ({'20°','45°','90°'});
k = 1;
for i = 1:2:6
clear data
data{1} = fullMatrix(i,:);
data{2} = fullMatrix(i+1,:);
bemobil_barplot(data,'nexttile',1,'comparison',[1 2],'xtickslabels',{'Ipsi','Contra'},'stats','chi2',...
    'multcmp','bonferroni','title',[titles{k}],...
    'ylim',[0 700],'cmap',mycmap([2,5],:),'StatsYPos',[430 70],'ylabel','Occurences (Normalized)');
k = k + 1;
% ax1 = gca;
% ax1.Box = 'off';
% if i ~= 1 
%     ax1.YAxis.Visible = 'off'; % remove y-axis
% end
end
legend({'Hit','Miss'},'Location','best') %northeastoutside
ff.Position = [750 200 450 150];
ff.Color = [1 1 1];
exportgraphics(ff,'C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_HitMiss_IpsiContra_Conditions.pdf','ContentType','vector')


%% Plotting Confidence and Difficulty for each

% Creating the tables
eventNo = [];
partiNo = [];
trialNo = [];
condDeg = [];
turnDir = [];
condDir = [];
difficulty = [];
HitMiss = [];
difficultyScore = [];
accuracyScore = []; 
likingScore = []; 
clear selfReportTable;

% identifying the conditions and the associated RT
for i3 = 1:length(allRTs)
    for i1 = 1:length(allRTs{i3})
            % Get the DifficultyScore / AccuracyScore / LikingScore
            if contains(allRTs{i3}(i1).type,'Difficulty') && contains(allRTs{i3}(i1+1).type,'Accuracy') && contains(allRTs{i3}(i1+2).type,'Liking')
                splitTrial = split(allRTs{i3}(i1).type(2:end), ';');
                eventNo = [eventNo; convertCharsToStrings(i1)];
                partiNo = [partiNo; convertCharsToStrings(i3)];
                trialNo = [trialNo; convertCharsToStrings(splitTrial{1})];
                condDeg = [condDeg; convertCharsToStrings(splitTrial{2})];
                turnDir = [turnDir; convertCharsToStrings(splitTrial{3})];
                % if 
                %     condDir = [condDir; ]
                % else
                %     condDir = [condDir; ]
                % end
                difficultyScore = [difficultyScore; convertCharsToStrings(splitTrial{end})];
                splitTrial = split(allRTs{i3}(i1+1).type(2:end), ';');
                accuracyScore = [accuracyScore; convertCharsToStrings(splitTrial{end})];
                splitTrial = split(allRTs{i3}(i1+2).type(2:end), ';');
                likingScore = [likingScore; convertCharsToStrings(splitTrial{end})];
            end
    end
    disp(['Dataset: ' num2str(i3) ' is done.']);
end
selfReportTable = array2table([eventNo, partiNo, trialNo, condDeg, turnDir, difficultyScore, accuracyScore, likingScore],...
    'VariableNames',{'eventNo','partiNo','trialNo', 'condDeg', 'turnDir','DifficultyScore','AccuracyScore','LikingScore'});
% save C:\Users\zadj\Documents\_Analysis\EEG_Pipeline\TurningAttention_selfReportTable.mat selfReportTable

% Mean value
data = cell(1,6);
for i1 = unique(selfReportTable.partiNo)'
    data{1} = [data{1}; mean(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")))];
    data{2} = [data{2}; mean(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")))];
    data{3} = [data{3}; mean(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")))];
    data{4} = [data{4}; mean(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")))];
    data{5} = [data{5}; mean(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")))];
    data{6} = [data{6}; mean(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")))];
    % data{7} = [data{7}; mean(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")))];
    % data{8} = [data{8}; mean(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")))];
    % data{9} = [data{9}; mean(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")))];
end

selfReportTable.DifficultyScore = double(selfReportTable.DifficultyScore);
mdl1 = fitlme(selfReportTable, 'DifficultyScore ~ condDeg * turnDir + (1 | partiNo)')

selfReportTable.AccuracyScore = double(selfReportTable.AccuracyScore);
mdl2 = fitlme(selfReportTable, 'AccuracyScore ~ condDeg * turnDir + (1 | partiNo)')

% selfReportTable.LikingScore = double(selfReportTable.LikingScore);
% mdl3 = fitlme(selfReportTable, 'LikingScore ~ condDeg * turnDir + (1 | partiNo)')

f = figure;
f.Color = [1 1 1];
k = 1;
for i = 1:3:4
    bemobil_raincloud(data(i:i+2),'cmap',cmap([4,6,9],:),'stats','wilcoxon','comparison',[1 2; 2 3; 1 3],...
        'nexttile',k,'multcmp','none','printP',1);
    k = k + 1;
end

% As timeseries
% tmpNinety = []; tmpFirtyfive = []; tmpTwenty = [];
% for i1 = unique(selfReportTable.partiNo)'
%     tmpTwenty = [tmpTwenty; bemobil_fillnan(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")),16)'];
%     tmpFirtyfive = [tmpFirtyfive; bemobil_fillnan(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")),16)'];
%     tmpNinety = [tmpNinety; bemobil_fillnan(str2double(selfReportTable.DifficultyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")),16)'];
% end
% bemobil_timeseries([{tmpTwenty},{tmpFirtyfive},{tmpNinety}],[0 16], 3,'stats','ttest','comparison',[1 2;2 3;1 3],'condNames',{'20','45','90'},'legend','on',...
%     'title','Difficulty Score');
% tmpNinety = []; tmpFirtyfive = []; tmpTwenty = [];
% for i1 = unique(selfReportTable.partiNo)'
%     tmpTwenty = [tmpTwenty; bemobil_fillnan(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")),16)'];
%     tmpFirtyfive = [tmpFirtyfive; bemobil_fillnan(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")),16)'];
%     tmpNinety = [tmpNinety; bemobil_fillnan(str2double(selfReportTable.AccuracyScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")),16)'];
% end
% bemobil_timeseries([{tmpTwenty},{tmpFirtyfive},{tmpNinety}],[0 16], 3,'stats','ttest','comparison',[1 2;2 3;1 3],'condNames',{'20','45','90'},'legend','on',...
%     'title','Accuracy Score');
% tmpNinety = []; tmpFirtyfive = []; tmpTwenty = [];
% for i1 = unique(selfReportTable.partiNo)'
%     tmpTwenty = [tmpTwenty; bemobil_fillnan(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "TwentyDegs")),16)'];
%     tmpFirtyfive = [tmpFirtyfive; bemobil_fillnan(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "FortyfiveDegs")),16)'];
%     tmpNinety = [tmpNinety; bemobil_fillnan(str2double(selfReportTable.LikingScore(selfReportTable.partiNo == i1 & selfReportTable.condDeg == "NinetyDegs")),16)'];
% end
% bemobil_timeseries([{tmpTwenty},{tmpFirtyfive},{tmpNinety}],[0 16], 3,'stats','ttest','comparison',[1 2;2 3;1 3],'condNames',{'20','45','90'},'legend','on',...
%     'title','Liking Score');

% %% lmfit()
% 
% partiNo = [];
% condDeg = [];
% condDir = [];
% difficulty = [];
% rt = [];
% hitmiss = [];
% 
% condNames = ["TwentyDegs";"FortyfiveDegs";"NinetyDegs"];
% difficultyNames = ["Hard";"Easy"];
% directionNames = ["Ipsi";"Contra"];
% hitmissNames = ["Hit";"Miss"];
% wallNames = ["PosnerWall1";"PosnerWall2";"PosnerWall3";"PosnerWall4";"PosnerWall5";...
%     "PosnerWall6";"PosnerWall7";"PosnerWall8";"PosnerWall9";"PosnerWall10";];
% 
% for i1 = unique(behaviorMetrics.partiNo)' % participant
%     trialNoList = unique(behaviorMetrics.trialNo(behaviorMetrics.partiNo == i1));
%     for i2 = 1:length(difficultyNames) % difficulty
%         for i3 = 1:length(condNames) % condition
%             for i4 = 1:length(directionNames) % direction
%                 for i5 = 1:length(hitmissNames) % hit/miss
%                         rt = [rt; mean(str2double(behaviorMetrics.rt(behaviorMetrics.partiNo == i1 &...
%                             behaviorMetrics.difficulty == difficultyNames(i2) &...
%                             behaviorMetrics.condDeg == condNames(i2) &...
%                             behaviorMetrics.condDir == directionNames(i4) &...
%                             behaviorMetrics.HitMiss == hitmissNames(i5) )),'omitnan')];
%                         partiNo = [partiNo; i1];
%                         difficulty = [difficulty; difficultyNames(i2)];
%                         condDeg = [condDeg; condNames(i3)];
%                         condDir = [condDir; directionNames(i4)];
%                         hitmiss = [hitmiss; hitmissNames(i5)];
%                 end
%             end
%         end
%     end
% end
% avgBehaviorMetrics = table(partiNo, condDeg, difficulty, condDir,...
%     hitmiss, rt, trialNoList, 'VariableNames',{'Subject','Condition','Difficulty','Lateralization','Hit','RT','Trial'});
% 
% for i = 1:size(avgBehaviorMetrics,1)
%     if avgBehaviorMetrics.Hit(i) == "Hit"
%        avgBehaviorMetrics.Hit(i) = 1;
%     elseif avgBehaviorMetrics.Hit(i) == "Miss"
%        avgBehaviorMetrics.Hit(i) = 0;
%     end
% end
% 
% data = [];
% data{1} = avgBehaviorMetrics.RT(avgBehaviorMetrics.Condition == "NinetyDegs" & avgBehaviorMetrics.Lateralization == "Contra");
% data{2} = avgBehaviorMetrics.RT(avgBehaviorMetrics.Condition == "NinetyDegs" & avgBehaviorMetrics.Lateralization == "Ipsi");
% bemobil_raincloud(data,'normal',0,'showMean',1,'showMedian',1,'stats','wilcoxon','comparison',[1 2],'xtickslabel',{'Contra','Ipsi'})
% 
% data = [];
% data{1} = avgBehaviorMetrics.RT(avgBehaviorMetrics.Condition == "NinetyDegs");
% data{2} = avgBehaviorMetrics.RT(avgBehaviorMetrics.Condition == "FortyfiveDegs");
% data{3} = avgBehaviorMetrics.RT(avgBehaviorMetrics.Condition == "TwentyDegs");
% bemobil_raincloud(data,'normal',0,'showMean',1,'showMedian',1,'stats','wilcoxon','comparison',[1 2;2 3;1 3],'xtickslabel',{'90','45',20})
% 
% 
% % Need to average across participant before inserting into fitlm() ...
% mdl = fitglm(avgBehaviorMetrics, 'Hit ~ Condition * Lateralization')
% anova(mdl)
