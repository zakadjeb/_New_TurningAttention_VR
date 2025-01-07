%% 1. Structuring the UNFOLD: pooling channels based on condition laterality (Use this)

% Loading in the ERP-dataset
%------------------------------------
TurningAttention_EEG_BaseInfo;
ALLEEG = []; EEG = []; CURRENTSET = []; allStats = [];
UNFOLD = load('C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\UNFOLD.mat','UNFOLD');
UNFOLD = UNFOLD.UNFOLD;
% tempUNFOLD = UNFOLD;

% Parameters
%------------------------------------
allPartici = [1 3:20]; % 1 3 5 11 12 13 15 16 17 18 19 20
removePartici = [8 10 14]; % [8 10 14]
allPartici = setdiff(allPartici, removePartici);
channelNames    = ["r5" "r6"; "r24" "r22"];      % w8/26 --> O1/2 // w3/28 --> PO7/8

% Generate average across participants
%------------------------------------
chanToPlot = nan(size(channelNames));
for i2 = 1:size(channelNames,1)
    for i3 = 1:size(channelNames,2)
        chanToPlot(i2,i3) = find(string({equidistChans.chanlocs.labels})' == string(channelNames(i2,i3)));
    end
end

d = cell(1,6);
for i = 1:6
    d{i} = cell(1,10);
end
for i2 = allPartici % Participants
    for i3 = chanToPlot(1,:) % Channels 1:2, 3, or 4
        for i4 = 1:10 % Stimulus Order
            contraChan = chanToPlot(2,chanToPlot(1,:) == i3);
            % Ipsi Channel
            d{1}{i4} = [d{1}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_20_contra_right-UNFOLD{i2}{contraChan}{i4}.erp_20_contra_right];
            d{2}{i4} = [d{2}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_20_ipsi_right-UNFOLD{i2}{contraChan}{i4}.erp_20_ipsi_right];
            d{3}{i4} = [d{3}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_45_contra_right-UNFOLD{i2}{contraChan}{i4}.erp_45_contra_right];
            d{4}{i4} = [d{4}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_45_ipsi_right-UNFOLD{i2}{contraChan}{i4}.erp_45_ipsi_right];
            d{5}{i4} = [d{5}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_90_contra_right-UNFOLD{i2}{contraChan}{i4}.erp_90_contra_right];
            d{6}{i4} = [d{6}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_90_ipsi_right-UNFOLD{i2}{contraChan}{i4}.erp_90_ipsi_right];

            chanName = channelNames(1,:);
        end
    end
    if size(chanToPlot(1,:),2) > 1
        for i3 = 1:6
            for i4 = 1:10
                idx = size(d{i3}{i4},1)-(size(chanToPlot(1,:),2)-1):size(d{i3}{i4},1);
                d{i3}{i4}(idx(1),:) = mean(d{i3}{i4}(idx,:));
                d{i3}{i4}(idx(2:end),:) = [];
            end
        end
    end
    for i3 = chanToPlot(2,:)
        for i4 = 1:10 % Stimulus Order
            contraChan = chanToPlot(1,chanToPlot(2,:) == i3);
            % Ipsi Channel
            d{1}{i4} = [d{1}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_20_contra_left-UNFOLD{i2}{contraChan}{i4}.erp_20_contra_left];
            d{2}{i4} = [d{2}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_20_ipsi_left-UNFOLD{i2}{contraChan}{i4}.erp_20_ipsi_left];
            d{3}{i4} = [d{3}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_45_contra_left-UNFOLD{i2}{contraChan}{i4}.erp_45_contra_left];
            d{4}{i4} = [d{4}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_45_ipsi_left-UNFOLD{i2}{contraChan}{i4}.erp_45_ipsi_left];
            d{5}{i4} = [d{5}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_90_contra_left-UNFOLD{i2}{contraChan}{i4}.erp_90_contra_left];
            d{6}{i4} = [d{6}{i4}; ...
                UNFOLD{i2}{i3}{i4}.erp_90_ipsi_left-UNFOLD{i2}{contraChan}{i4}.erp_90_ipsi_left];
        end
    end
    if size(chanToPlot(2,:),2) > 1
        for i3 = 1:6
            for i4 = 1:10
                idx = size(d{i3}{i4},1)-(size(chanToPlot(2,:),2)-1):size(d{i3}{i4},1);
                d{i3}{i4}(idx(1),:) = mean(d{i3}{i4}(idx,:));
                d{i3}{i4}(idx(2:end),:) = [];
            end
        end
    end
end

for i2 = 1:6
    for i1 = 1:10
        d{i2}{i1} = squeeze(mean(reshape(d{i2}{i1},length(allPartici),2,200),2));
    end
end
temp = cell(2,6);
for i = 1:6
    temp{1,i} = meanCellv2(d{i}([1:3 8:10]));
    temp{2,i} = meanCellv2(d{i}(4:7));
end
d = temp;


%% 2. Grand averages: pooling channels based on condition laterality (Report this)
TurningAttention_EEG_BaseInfo;

% Parameters
%------------------------------------
allPartici = [1 3:20]; % 1 3 5 11 12 13 15 16 17 18 19 20
removePartici = [8 10 14]; % [8 10 14]
allPartici = setdiff(allPartici, removePartici);

% Loading in the behavioral dataset
%------------------------------------
load("C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\TurningAttention_behaviorMetrics.mat", "behaviorMetrics")
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

tmpPartici = [1 3:20];
meanRTlist = cell(1,3);
data = cell(3,2,length(whichWalls));
for i1 = 1:3 % Conditions
    for i2 = whichWalls % Walls
        for i3 = 1:length(allPartici) % participants
            for i4 = 1:2 % Laterality
                [~,I] = find(allPartici(i3) == tmpPartici);
                logicalIdx = WallTbl.Participant == I & WallTbl.Condition == condNames{i1} &...
                    WallTbl.Wall == i2 & WallTbl.Group == condDir{i4} & WallTbl.Hits == 1;
                if sum(logicalIdx) == 0; error('No RTs found'); end
                data{i1,i4,i2} = [data{i1,i4,i2}; WallTbl.RT(logicalIdx)];
            end
        end
    end
end



% Plot parameters
%------------------------------------
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
cmap = cell(1,6);
cmap{1} = bemobil_makecmap(mycmap(1:2,:),10);
cmap{2} = bemobil_makecmap(mycmap(3:4,:),10);
cmap{3} = bemobil_makecmap(mycmap(5:6,:),10);
cmap{4} = bemobil_makecmap(mycmap(1:2,:),10);
cmap{5} = bemobil_makecmap(mycmap(3:4,:),10);
cmap{6} = bemobil_makecmap(mycmap(5:6,:),10);

% Parameters
%------------------------------------
% clear channelNames
exportGraphics  = 0;
exportTxt       = '_P1_StimuliOrder_Based';
thres           = 15;
lineWidth       = 1.5;
permTest        = 5000;
peakDirection   = 'positive';       % P1 -> 'positive' // N2pc -> 'mean'
timeWindow      = [100 200];        % For the P1 in O1/2 -> [100 200] // N2pc in PO7/8 -> [230 430]
erpYlim         = [-6 16];
dCorrYlim       = [0 5];
rtYlim          = [.25 .5];
meanERP         = cell(1,2);
distCorrList    = cell(2,3);
peakPos         = cell(2,3);

% Identifying timewindow to analyze
%------------------------------------
[~, idxStart]   = min(abs(UNFOLD{end} - timeWindow(1))); 
[~, idxEnd]     = min(abs(UNFOLD{end} - timeWindow(2)));

% Preparing linear regression table
%------------------------------------
ParticipantList = []; TurningAngle = []; StimuliOrder = []; ChannelLaterality = []; ConditionLaterality = []; erpList = [];
participantLoop = [1:length(allPartici), 1:length(allPartici)]; DifficultyPhase = [];

% The actual plot
%------------------------------------
f = figure; t = tiledlayout(4,3,'TileSpacing','tight','Padding','tight'); titleTxt = {'20°','45°','90°'};
counter = 1;
title(t,['O1/2, P1 in ' num2str(timeWindow(1)) '-' num2str(timeWindow(2)) 'ms']);
f.Position = [200 100 450 600]; f.Color = [1 1 1];
dd = d;
for m = [1:2:5]
    temp = cell(2,10);
    meanList = cell(2,10);
    medianList = cell(2,10);
    % kdeList = cell(2,10);
    nexttile(counter,[2,1]);
    for j = 1:size(d{1},2)
        for i = 1:size(d{1}{j},1)
            % dd{1} = meanBetween(d{m}{j},d{m+6}{j});
            dd{1} = d{m}{j};
            meanERP{1} = [meanERP{1}; dd{1}];
            [idx, ampPeak] = bemobil_findpeaks(dd{1}(i,idxStart:idxEnd),'diff',peakDirection);
            if strcmp(peakDirection,'negative'); [ampPeak, tmpidx] = min(ampPeak); end
            if strcmp(peakDirection,'positive'); [ampPeak, tmpidx] = max(ampPeak); end
            if strcmp(peakDirection,'mean'); ampPeak = mean(ampPeak); end
            % if ampPeak > thres || ampPeak < -thres; ampPeak = NaN; end
            temp{1,j} = [temp{1,j}; ampPeak];
            % peakPos{1,counter} = [peakPos{1,counter}; idx(tmpidx), ampPeak];
            
            StimuliOrder = [StimuliOrder; j];
            if j <= 3 || j >= 8
                DifficultyPhase = [DifficultyPhase; "Easy"];
            else
                DifficultyPhase = [DifficultyPhase; "Hard"];
            end
            ParticipantList = [ParticipantList; participantLoop(i)];
            if m == 1
                TurningAngle = [TurningAngle; 20];
                ConditionLaterality = [ConditionLaterality; "Contra"];
            elseif m == 3
                TurningAngle = [TurningAngle; 45];
                ConditionLaterality = [ConditionLaterality; "Contra"];
            elseif m == 5
                TurningAngle = [TurningAngle; 90];
                ConditionLaterality = [ConditionLaterality; "Contra"];
            end
            erpList = [erpList; ampPeak];

            plot(j-0.15, ampPeak,'x','MarkerSize',3,'MarkerFaceColor',cmap{counter}(j,:),'MarkerEdgeColor',cmap{counter}(j,:));
            hold on

            % dd{2} = meanBetween(d{m+1}{j},d{m+7}{j});
            dd{2} = d{m+1}{j};
            meanERP{2} = [meanERP{2}; dd{2}];
            [idx, ampPeak] = bemobil_findpeaks(dd{2}(i,idxStart:idxEnd),'diff',peakDirection);
            if strcmp(peakDirection,'negative'); [ampPeak, tmpidx] = min(ampPeak); end
            if strcmp(peakDirection,'positive'); [ampPeak, tmpidx] = max(ampPeak); end
            if strcmp(peakDirection,'mean'); ampPeak = mean(ampPeak); end
            % if ampPeak > thres || ampPeak < -thres; ampPeak = NaN; end
            temp{2,j} = [temp{2,j}; ampPeak];
            % peakPos{2,counter} = [peakPos{2,counter}; idx(tmpidx), ampPeak];

            StimuliOrder = [StimuliOrder; j];
            if j <= 3 || j >= 8
                DifficultyPhase = [DifficultyPhase; "Easy"];
            else
                DifficultyPhase = [DifficultyPhase; "Hard"];
            end
            ParticipantList = [ParticipantList; participantLoop(i)];
            if m == 1
                TurningAngle = [TurningAngle; 20];
                ConditionLaterality = [ConditionLaterality; "Ipsi"];
            elseif m == 3
                TurningAngle = [TurningAngle; 45];
                ConditionLaterality = [ConditionLaterality; "Ipsi"];
            elseif m == 5
                TurningAngle = [TurningAngle; 90];
                ConditionLaterality = [ConditionLaterality; "Ipsi"];
            end
            erpList = [erpList; ampPeak];

            plot(j+0.15, ampPeak,'x','MarkerSize',3,'MarkerFaceColor',cmap{counter}(j,:),'MarkerEdgeColor',cmap{counter}(j,:));
            hold on
        end
        % plot(j, removeOutliers(temp{j},3),'ko');
        meanList{1,j} = [meanList{1,j}; mean(removeOutliers(temp{1,j},3),'omitnan')];
        % meanList{1,j} = [meanList{1,j}; mean(temp{1,j},'omitnan')];
        % medianList{1,j} = [medianList{1,j}; median(removeOutliers(temp{1,j},5),'omitnan')];
        medianList{1,j} = [medianList{1,j}; median(temp{1,j},'omitnan')];
    
        meanList{2,j} = [meanList{2,j}; mean(removeOutliers(temp{2,j},3),'omitnan')];
        % meanList{2,j} = [meanList{2,j}; mean(temp{2,j},'omitnan')];
        % medianList{2,j} = [medianList{2,j}; median(removeOutliers(temp{2,j},5),'omitnan')];
        medianList{2,j} = [medianList{2,j}; median(temp{2,j},'omitnan')];
    
    end
    p1 = plot(1:10,cell2mat(meanList(1,:)),'LineWidth',lineWidth,'Color','k');
    hold on;
    p2 = plot(1:10,cell2mat(meanList(2,:)),'LineWidth',lineWidth,'LineStyle',':','Color','k');
    xlim([0 11]); ylim([erpYlim(1) erpYlim(2)]);
    title(titleTxt{counter}); 
    xline(4); xline(7);
    xlabel('Stimuli'); ylabel('µV');
    xticks(1:10);
    lgd = legend([p1,p2],{'Contra','Ipsi'});
    title(lgd,'Turning Condition');
    legend('boxoff')
    grid on
    box off

    % Plotting across Turning Angles during Contra Conditions
    signal1 = mat2cell(cell2mat(temp(1,:)),[ones(1,size(cell2mat(temp(1,:)),1))], 10)';
    tmp = squeeze(cell2mat(data(counter,1,:)));
    signal2 = mat2cell(tmp,[ones(1,size(cell2mat(temp(1,:)),1))], 10)';
    ax1 = nexttile(7,[1,3]);
    yyaxis left
    p3 = plot(1:10,meanCell(signal1,2),'LineWidth',lineWidth,'Color',cmap{counter}(1,:),'LineStyle','-');
    set(gca,'YColor','k')
    ylim([dCorrYlim(1) dCorrYlim(2)]);
    ylabel('µV');
    yyaxis right
    b3 = plot(1:10,meanCell(signal2,2),'LineStyle',':','LineWidth',1,'Color',cmap{counter}(1,:));
    ylim([rtYlim(1) rtYlim(2)]);
    set(gca,'YColor','k')
    ylabel('Response time (s)');
    % [group_dCor, p_value] = groupDistanceCorrelationWithPermutation(signal1,signal2,5000);
    [group_dCor, p_value] = distcorr_pvalue(cell2mat(temp(1,:)),squeeze(cell2mat(data(counter,1,:))),permTest);
    distCorrList{1,counter} = [distCorrList{1,counter}, group_dCor, p_value];
    hold on
    xlim([0 11]); 
    title(['Contra Condition']); 
    xline(4); xline(7);
    xlabel('Stimuli'); 
    xticks(1:10);
    grid on
    box off
    
    % Plotting across Turning Angles during Ipsi Conditions
    ax2 = nexttile(10,[1,3]);
    signal1 = mat2cell(cell2mat(temp(2,:)),[ones(1,size(cell2mat(temp(2,:)),1))], 10)';
    tmp = squeeze(cell2mat(data(counter,2,:)));
    signal2 = mat2cell(tmp,[ones(1,size(cell2mat(temp(1,:)),1))], 10)';
    yyaxis left
    p4 = plot(1:10,meanCell(signal1,2),'LineWidth',lineWidth,'Color',cmap{counter}(1,:),'LineStyle','-');
    set(gca,'YColor','k')
    ylim([dCorrYlim(1) dCorrYlim(2)]);
    ylabel('µV');
    yyaxis right
    b4 = plot(1:10,meanCell(signal2,2),'LineStyle',':','LineWidth',1,'Color',cmap{counter}(1,:));
    ylim([rtYlim(1) rtYlim(2)]);
    set(gca,'YColor','k')
    ylabel('Response time (s)');
    % [group_dCor, p_value] = groupDistanceCorrelationWithPermutation(signal1,signal2,5000);
    [group_dCor, p_value] = distcorr_pvalue(cell2mat(temp(2,:)),squeeze(cell2mat(data(counter,1,:))),permTest);
    distCorrList{2,counter} = [distCorrList{2,counter}, group_dCor, p_value];
    hold on
    xlim([0 11]); 
    title(['Ipsi Condition']); 
    xline(4); xline(7);
    xlabel('Stimuli'); 
    xticks(1:10);
    grid on
    box off


    % nexttile(counter+3)
    % [break_point, max_F, F_stats] = quandt_test_multiple(cell2mat(temp(1,:)));
    % ksdensity(cell2mat(meanList(1,:)),'Bandwidth',0.3)
    % hold on
    % ksdensity(cell2mat(meanList(2,:)),'Bandwidth',0.3)
    counter = counter + 1;
end
lgd = legend(ax1,['20°, dR:' num2str(round(distCorrList{1,1}(1),2))  ', p:' num2str(round(distCorrList{1,1}(2),4))],...
    ['45°, dR:' num2str(round(distCorrList{1,2}(1),2))  ', p:' num2str(round(distCorrList{1,2}(2),4))],...
    ['90°, dR:' num2str(round(distCorrList{1,3}(1),2))  ', p:' num2str(round(distCorrList{1,3}(2),4))]);
% lgd = legend(ax1,'20°','','','45°','','','90°','','');
lgd.Box = 'off';
lgd = legend(ax2,['20°, dR:' num2str(round(distCorrList{2,1}(1),2))  ', p:' num2str(round(distCorrList{2,1}(2),4))],...
    ['45°, dR:' num2str(round(distCorrList{2,2}(1),2))  ', p:' num2str(round(distCorrList{2,2}(2),4))],...
    ['90°, dR:' num2str(round(distCorrList{2,3}(1),2))  ', p:' num2str(round(distCorrList{2,3}(2),4))]);
lgd.Box = 'off';

figure;
plot(UNFOLD{end},mean(meanERP{1}));
hold on
plot(UNFOLD{end},mean(meanERP{2}));
xline(0);yline(0);xline(timeWindow,'r:','LineWidth',2);
% [idx,amp] = bemobil_findpeaks(mean(meanERP{1}),'diff',peakDirection);
% hold on
% plot(UNFOLD{end}(idx),amp,'r.')

% Exporting the figure
%------------------------------------
if exportGraphics
    exportgraphics(f,['C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\' exportTxt '.pdf'],'ContentType','vector');
end


% Computing the linear regression to check for significance
%------------------------------------
tbl = table(ParticipantList,TurningAngle,ConditionLaterality,StimuliOrder,DifficultyPhase,erpList,...
    'VariableNames',{'Participant','TurningAngle','ConditionLaterality','StimuliOrder','DifficultyPhase','ERP'});
% tbl.ChannelLaterality = categorical(tbl.ChannelLaterality);
tbl.ConditionLaterality = categorical(tbl.ConditionLaterality);
tbl.DifficultyPhase = categorical(tbl.DifficultyPhase);
% tbl.StimuliOrder = categorical(tbl.StimuliOrder);
tbl.TurningAngle = categorical(tbl.TurningAngle,'Ordinal',true);
tbl.TurningAngle = reordercats(tbl.TurningAngle, {'20','45','90'});
mdl1 = fitlme(tbl,'ERP ~ TurningAngle * ConditionLaterality * StimuliOrder + (1 | Participant)');
mdl2 = fitlme(tbl,'ERP ~ TurningAngle + ConditionLaterality + StimuliOrder + (1 | Participant)');

if mdl1.ModelCriterion.AIC < mdl2.ModelCriterion.AIC
    mdl = mdl1
    disp('With-interactions model, wins')
else
    mdl = mdl2
    disp('Without-interactions model, wins')
end

% We calculated the group distance correlation coefficient (R = 0.75, p < 0.001), 
% indicating a strong multivariate dependency between the signals.

%% 3. Grand averages for the N1 (Report  this)
% Loading in the basic info
%------------------------------------
TurningAttention_EEG_BaseInfo;
% 
% Parameters
%------------------------------------
allPartici = [1 3:20]; % 1 3 5 11 12 13 15 16 17 18 19 20
% removePartici = [ 10 14]; % [8 10 14]
allPartici = setdiff(allPartici, removePartici);

mycmap = bemobil_makecmap([ ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#22327B')/255; ...
    hex2rgb('#03071E')/255; ...
    hex2rgb('#D00000')/255; ...
    hex2rgb('#FAA307')/255; ...
    ],10);

mycmap = mycmap([4,1,6,7,9,10],:);
mycmapXL = bbar_makecmap(mycmap, 1000);
mycmap = [mycmap;mycmap];

% Parameters
% clear channelNames
lineWidth       = 1;
faceAlpha       = 0.2;
peakDirection   = 'negative';       % P1 -> 'positive' // N2pc -> 'mean'
timeWindow      = [120 200];        % [120 200] %For the P1 in O1/2 -> [100 200] // N2pc in PO7/8 -> [230 430]
% whichWalls      = [1:3 8:10];
exportGraphics  = 0;
exportTxt1      = '_Final_N1_DifficultyXLaterality';
exportTxt2      = '_Final_N1_TurningAngleXDifficultyXLaterality';
chanTitle       = 'P3/4 + P5/6';
erpTitle        = 'N1';
minY            = -5;               % P1 -> -4 // N2pc -> -3
maxY            = 3;                % P1 -> 1.5 // N2pc -> 2
statsYPos       = [1 1.5];          % P1 -> [4 1] // N2pc -> [5 1.2]
RCminmax        = [-11 4];          % P1 -> [-3 7] // N2pc -> [-10 8]
statTest        = 'wilcoxon';
legendPosition  = 'southeast';
multcmpMethod   = 'BH';
showNormal      = 0;
rmOutlier       = 0;
filtA           = 0;
filtB           = 30;
condTitles      = ['20°';'45°';'90°'];
Difficulty      = ['20°';'45°';'90°'];
collectingERPs  = zeros(2,2);
% channelNames{1} = 'PO7/8'; channelNames{2} = 'PO7/8'; channelNames{3} = 'Oz'; channelNames{4} = 'POz'; channelNames{5} = 'Cz';

% Preparing linear regression table
ParticipantList = []; TurningAngle = []; ChannelLaterality = []; ConditionLaterality = []; DifficultyPhase = []; erpList = [];

% Loading in the ERP-dataset
%------------------------------------
ALLEEG = []; EEG = []; CURRENTSET = []; allStats = [];
UNFOLD = load('C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\UNFOLD.mat','UNFOLD');
UNFOLD = UNFOLD.UNFOLD;
% tempUNFOLD = UNFOLD;

% Identifying timewindow to analyze
%------------------------------------
[~, idxStart]   = min(abs(UNFOLD{end} - timeWindow(1))); 
[~, idxEnd]     = min(abs(UNFOLD{end} - timeWindow(2)));

% Plotting the results (Within lateralization)
%------------------------------------
f = figure; f.Color = [1 1 1]; f.Position = [100 25 400 700];
t = tiledlayout(3,3,'TileSpacing','compact','Padding','compact');
% title(t,'TurningAngle x ChannelLaterality')
condLoop = [1,2;3,4;5,6];
% dd = cell(2,6);
dd = d;
for i1 = 1:3
    ax1 = nexttile(i1*3-2,[1,2]);
    fill([timeWindow(1) timeWindow(2) timeWindow(2) timeWindow(1)],...
    [-1000 -1000 1000 1000],'k','FaceAlpha',0.1,'EdgeColor','none');
    for i = condLoop(i1,:)
        hold on
        % dd{1,i} = meanCellv2(d{i}([1:3 8:10]));
        
        patch([UNFOLD{end} fliplr(UNFOLD{end})], [mean(dd{1,i},1,'omitnan')-(std(dd{1,i},0,1,"omitnan")/sqrt(size(dd{1,i},1))),...
            fliplr(mean(dd{1,i},1,'omitnan')+(std(dd{1,i},0,1,"omitnan")/sqrt(size(dd{1,i},1))))],...
            mycmap(i,:),'FaceAlpha',faceAlpha, 'EdgeColor','none');
        % dd{2,i} = meanCellv2(d{i}(4:7));
        patch([UNFOLD{end} fliplr(UNFOLD{end})], [mean(dd{2,i},1,'omitnan')-(std(dd{2,i},0,1,"omitnan")/sqrt(size(dd{2,i},1))),...
            fliplr(mean(dd{2,i},1,'omitnan')+(std(dd{2,i},0,1,"omitnan")/sqrt(size(dd{2,i},1))))],...
            mycmap(i,:),'FaceAlpha',faceAlpha, 'EdgeColor','none');
        plot(UNFOLD{end}, mean(dd{1,i},'omitnan'),'color',mycmap(i,:),'LineWidth',lineWidth,'LineStyle','-');
        plot(UNFOLD{end}, mean(dd{2,i},'omitnan'),'color',mycmap(i,:),'LineWidth',lineWidth,'LineStyle',':');
    end
    % plot(UNFOLD{end}, mean(dd{i},'omitnan')-mean(dd{i-1},'omitnan'),'k:','LineWidth',lineWidth);
    xline(0); yline(0);
    xlim([UNFOLD{end}(1) UNFOLD{end}(end)]);
    ylim([minY maxY]);
    ax = gca;
    ax.YAxisLocation = 'origin'; yline(0);
    box off
    leg = legend('','','','Incongr., Straight','Incongr., Turning','','','Congr., Straight','Congr., Turning');
    set(leg, 'Location', legendPosition);
    legend boxoff
    leg.LineWidth = 0.5;
    leg.ItemTokenSize = [10, 1]; % Reduce line length
    title([chanTitle ', ' condTitles(i1,:) ', ' erpTitle]);

    % Raincloud of above
    temp = cell(1,4); counter = 1;
    turningAngle = [20,20,45,45,90,90];
    diffPhase = ["Straight","Turning"];
    lateralityCond = repmat(["Incongruent","Congruent"],1,3);
    for i2 = 1:size(dd{1},1)
        counter = 1;
        for i = condLoop(i1,:)
            for i3 = 1:size(diffPhase,2)
                    [~, ampPeak] = bemobil_findpeaks(dd{i3,i}(i2,idxStart:idxEnd),'gradient',peakDirection);
                    if strcmp(peakDirection,'negative'); ampPeak = min(ampPeak); end
                    if strcmp(peakDirection,'positive'); ampPeak = max(ampPeak); end
                    if strcmp(peakDirection,'mean'); ampPeak = mean(ampPeak); end
                    temp{counter} = [temp{counter}; ampPeak];
                    ParticipantList = [ParticipantList; i2];
                    TurningAngle = [TurningAngle; turningAngle(i)];
                    ConditionLaterality = [ConditionLaterality; lateralityCond(i)];
                    DifficultyPhase = [DifficultyPhase; diffPhase(i3)];
                    erpList = [erpList; ampPeak];
                    counter = counter + 1;
            end
        end
    end
    [~,stats] = bbar_raincloud(temp,'rmOutlier',rmOutlier,'showMean',1,'stats',statTest,'comparison',[1 2; 3 4; 1 3; 2 4],'nexttile',i1*3,'showMedian',1,...
        'paired',1,'showInteraction',1,'cmap',mycmap([i-1 i-1 i i],:),'xtickslabel',{'IS','IT','CS','CT'},...
        'ylabel', 'µV','StatsYPos', statsYPos,'ylim',RCminmax, 'normal', showNormal,'multcmp',multcmpMethod);
    allStats = [allStats; stats];
end


ff = figure; ff.Color = [1 1 1]; ff.Position = [500 25 400 700];
tiledlayout(4,3,'TileSpacing','compact','Padding','compact'); tileCounter = -2; tileCounterRC = 0;
for i2 = 1:2
    tileCounter = tileCounter + 3; 
    nexttile(tileCounter,[1,2]);
    fill([timeWindow(1) timeWindow(2) timeWindow(2) timeWindow(1)],...
    [-1000 -1000 1000 1000],'k','FaceAlpha',0.1,'EdgeColor','none');
    for i = [1:2:5]
        hold on
        % i = 1;
        % dd{i} = meanCellv2(d{i}(whichWalls));
        patch([UNFOLD{end} fliplr(UNFOLD{end})], [mean(dd{i2,i},1,'omitnan')-(std(dd{i2,i},0,1,"omitnan")/sqrt(size(dd{i2,i},1))),...
            fliplr(mean(dd{i2,i},1,'omitnan')+(std(dd{i2,i},0,1,"omitnan")/sqrt(size(dd{i2,i},1))))],...
            mycmap(i,:),'FaceAlpha',faceAlpha, 'EdgeColor','none');
        plot(UNFOLD{end}, mean(dd{i2,i},'omitnan'),'color',mycmap(i,:),'LineWidth',lineWidth);
    end
    xline(0); yline(0);
    xlim([UNFOLD{end}(1) UNFOLD{end}(end)]);
    ylim([minY maxY]);
    ax = gca;
    ax.YAxisLocation = 'origin'; yline(0);
    box off
    leg = legend('','','20°','','45°','','90°');
    set(leg, 'Location', legendPosition);
    legend boxoff
    leg.LineWidth = 0.5;
    leg.ItemTokenSize = [10, 1]; % Reduce line length
    title(["Incongr., " + diffPhase(i2) + ", " + string(chanTitle) + ", " + string(erpTitle)]);

    % Raincloud of above
    temp = cell(1,3); counter = 1;
    turningAngle = [20,20,45,45,90,90];
    for k = 1:2:5
        for i = 1:size(dd{1},1)
            [~, ampPeak] = bemobil_findpeaks(dd{i2,k}(i,idxStart:idxEnd),'gradient',peakDirection);
            if strcmp(peakDirection,'negative'); ampPeak = min(ampPeak); end
            if strcmp(peakDirection,'positive'); ampPeak = max(ampPeak); end
            if strcmp(peakDirection,'mean'); ampPeak = mean(ampPeak); end
            temp{counter} = [temp{counter}; ampPeak];
        end
        counter = counter + 1;
    end
    tileCounterRC = tileCounterRC + 3; 
    [~,stats] = bbar_raincloud(temp,'rmOutlier',rmOutlier,'showMean',1,'stats',statTest,'comparison',[1 2; 2 3; 1 3],'nexttile',tileCounterRC,'showMedian',1,...
        'paired',1,'showInteraction',1,'cmap',mycmap([1 3 5],:),'xtickslabel',{'20°','45°','90°'},...
        'ylabel', 'µV','StatsYPos', statsYPos,'ylim',RCminmax, 'normal', showNormal,'multcmp',multcmpMethod);
    allStats = [allStats; stats];
    % title(["Contra, " + diffPhase(i2) + ", " + string(chanTitle) + ", " + string(erpTitle)]);
    collectingERPs(2,i2) = meanCell(temp);
end

for i2 = 1:2
    tileCounter = tileCounter + 3; 
    nexttile(tileCounter,[1,2]);
    fill([timeWindow(1) timeWindow(2) timeWindow(2) timeWindow(1)],...
    [-1000 -1000 1000 1000],'k','FaceAlpha',0.1,'EdgeColor','none');
    for i = 2:2:6
        hold on
        % i = 1;
        % dd{i} = meanCellv2(d{i}(whichWalls));
        patch([UNFOLD{end} fliplr(UNFOLD{end})], [mean(dd{i2,i},1,'omitnan')-(std(dd{i2,i},0,1,"omitnan")/sqrt(size(dd{i2,i},1))),...
            fliplr(mean(dd{i2,i},1,'omitnan')+(std(dd{i2,i},0,1,"omitnan")/sqrt(size(dd{i2,i},1))))],...
            mycmap(i,:),'FaceAlpha',faceAlpha, 'EdgeColor','none');
        plot(UNFOLD{end}, mean(dd{i2,i},'omitnan'),'color',mycmap(i,:),'LineWidth',lineWidth);
    end
    xline(0); yline(0);
    xlim([UNFOLD{end}(1) UNFOLD{end}(end)]);
    ylim([minY maxY]);
    ax = gca;
    ax.YAxisLocation = 'origin'; yline(0);
    box off
    leg = legend('','','20°','','45°','','90°');
    set(leg, 'Location', legendPosition);
    legend boxoff
    leg.LineWidth = 0.5;
    leg.ItemTokenSize = [10, 1]; % Reduce line length
    title(["Congr., " + diffPhase(i2) + ", " + string(chanTitle) + ", " + string(erpTitle)]);

    % Raincloud of above
    temp = cell(1,3); counter = 1;
    turningAngle = [20,20,45,45,90,90];
    for k = 2:2:6
        for i = 1:size(dd{1},1)
            [~, ampPeak] = bemobil_findpeaks(dd{i2,k}(i,idxStart:idxEnd),'gradient',peakDirection);
            if strcmp(peakDirection,'negative'); ampPeak = min(ampPeak); end
            if strcmp(peakDirection,'positive'); ampPeak = max(ampPeak); end
            if strcmp(peakDirection,'mean'); ampPeak = mean(ampPeak); end
            temp{counter} = [temp{counter}; ampPeak];
        end
        counter = counter + 1;
    end
    tileCounterRC = tileCounterRC + 3; 
    [~,stats] = bbar_raincloud(temp,'rmOutlier',rmOutlier,'showMean',1,'stats',statTest,'comparison',[1 2; 2 3; 1 3],'nexttile',tileCounterRC,'showMedian',1,...
        'paired',1,'showInteraction',1,'cmap',mycmap([2 4 6],:),'xtickslabel',{'20°','45°','90°'},...
        'ylabel', 'µV','StatsYPos', statsYPos,'ylim',RCminmax, 'normal', showNormal,'multcmp',multcmpMethod);
    allStats = [allStats; stats];
    % title(["Ipsi, " + diffPhase(i2) + " " + string(chanTitle) + ", " + string(erpTitle)]);
    collectingERPs(1,i2) = meanCell(temp);
end


% [X, Y] = meshgrid(1:2, 1:2); % Original grid (2x2)
% [Xq, Yq] = meshgrid(1:0.01:2, 1:0.01:2); % Interpolated grid (100x100)
% A_interp = interp2(X, Y, collectingERPs, Xq, Yq, 'linear'); % Linear interpolation
% figure;
% imagesc(A_interp);
% axis xy
% colormap(mycmapXL)

% Computing the linear regression to check for significance
%------------------------------------
tbl = table(ParticipantList,TurningAngle,ConditionLaterality,DifficultyPhase,erpList,...
    'VariableNames',{'Participant','TurningAngle','ConditionLaterality','DifficultyPhase','ERP'});
tbl.DifficultyPhase = categorical(DifficultyPhase);
tbl.ConditionLaterality = categorical(tbl.ConditionLaterality);
tbl.TurningAngle = categorical(tbl.TurningAngle,'Ordinal',true);
tbl.TurningAngle = reordercats(tbl.TurningAngle, {'20','45','90'});
mdl1 = fitlme(tbl,'ERP ~ TurningAngle * ConditionLaterality * DifficultyPhase + (1 | Participant)');
mdl2 = fitlme(tbl,'ERP ~ TurningAngle + ConditionLaterality + DifficultyPhase + (1 | Participant)');

if mdl1.ModelCriterion.AIC < mdl2.ModelCriterion.AIC
    mdl = mdl1;
    anovaTbl = anova(mdl);
    bbar_partialEta(anovaTbl)
    disp('With-interactions model, wins')
else
    mdl = mdl2;
    anovaTbl = anova(mdl);
    bbar_partialEta(anovaTbl)
    disp('Without-interactions model, wins')
end

% anova(mdl)
% [~, ~, stats] = anovan(tbl.ERP, {tbl.Condition, tbl.Group}, 'varnames', {'Condition','Group'});
% multcompare(stats, 'CType', 'hsd');

allStats
if exportGraphics
    exportgraphics(f,['C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\' exportTxt1 '.pdf'],'ContentType','vector')
    exportgraphics(ff,['C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\' exportTxt2 '.pdf'],'ContentType','vector')
end

%% Compute the topo's of Condition and Lateralization

if isempty(EEG)
    EEG = pop_loadset('filename', 'ICAWeighted_noBreaks_resampled_ERPdataset_NotClean_Interp_AvRef_RenamedEvents_EyeRejected.set', 'filepath', datapathSave{3});
end
if isempty(UNFOLD)
    UNFOLD = load('C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\_Analysis\EEG_Pipeline\UNFOLD.mat','UNFOLD');
    UNFOLD = UNFOLD.UNFOLD;
end


% Parameters
%------------------------------------
timeToAnalyze   = [170 170];        % P1 --> [150 200] 
colorMinMax     = [-3 3];       % P1 --> [-2 2]
exportGraphics  = 1;
exportTxt       = '_Final_Topo_N1';
    
titleString{1}  = 'Incongr., Straight, 20°';
titleString{2}  = 'Incongr., Turning, 20°';
titleString{3}  = 'Congr., Straight, 20°';
titleString{4}  = 'Congr., Turning, 20°';

titleString{5}  = 'Incongr., Straight, 45°';
titleString{6}  = 'Incongr., Turning, 45°';
titleString{7}  = 'Congr., Straight, 45°';
titleString{8}  = 'Congr., Turning, 45°';

titleString{9}  = 'Incongr., Straight, 90°';
titleString{10} = 'Incongr., Turning, 90°';
titleString{11} = 'Congr., Straight, 90°';
titleString{12} = 'Congr., Turning, 90°';


% mycmap = bemobil_makecmap([ ...
%     hex2rgb('#3F80CF')/255; ...
%     hex2rgb('#22327B')/255; ...
%     hex2rgb('#03071E')/255; ...
%     hex2rgb('#D00000')/255; ...
%     hex2rgb('#FAA307')/255; ...
%     ],5);

mycmap = bemobil_makecmap([ ...
    hex2rgb('#03071E')/255; ...
    % hex2rgb('#22327B')/255; ...
    hex2rgb('#3F80CF')/255; ...
    hex2rgb('#FAA307')/255; ...
    hex2rgb('#D00000')/255
    ],5);

% mycmap = [hex2rgb('#023e8a')/255; mycmap([3],:); [0.1 0.1 0.1]; mycmap([7,10],:)];
mycmap = bbar_makecmap(mycmap,1000);
mycmap = bbar_lightencolors(mycmap,0.2);


% Extracting the topographic information for each condition
%------------------------------------
leftSide = []; rightSide = [];
for i = 1:128
    if EEG.chanlocs(i).Y > 0
        leftSide = [leftSide, i];
    else
        rightSide = [rightSide, i];
    end
end

topoD = cell(2,6);
for i2 = 1:size(topoD,2)
    topoD{i2} = nan(20,128,10,200); % participants, channels, walls, amplitudes
end

for i = allPartici
    for i2 = leftSide
        for i3 = [1:3 8:10]
            topoD{1,1}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_contra_right;
            topoD{1,2}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_ipsi_right;
            topoD{1,3}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_contra_right;
            topoD{1,4}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_ipsi_right;
            topoD{1,5}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_contra_right;
            topoD{1,6}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_ipsi_right;
        end
        for i3 = 4:7
            topoD{2,1}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_contra_right;
            topoD{2,2}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_ipsi_right;
            topoD{2,3}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_contra_right;
            topoD{2,4}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_ipsi_right;
            topoD{2,5}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_contra_right;
            topoD{2,6}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_ipsi_right;
        end
    end
    for i2 = rightSide
        for i3 = [1:3 8:10]
            topoD{1,1}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_contra_left;
            topoD{1,2}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_ipsi_left;
            topoD{1,3}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_contra_left;
            topoD{1,4}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_ipsi_left;
            topoD{1,5}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_contra_left;
            topoD{1,6}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_ipsi_left;
        end
        for i3 = 4:7
            topoD{2,1}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_contra_left;
            topoD{2,2}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_20_ipsi_left;
            topoD{2,3}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_contra_left;
            topoD{2,4}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_45_ipsi_left;
            topoD{2,5}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_contra_left;
            topoD{2,6}(i,i2,i3,:) = UNFOLD{i}{i2}{i3}.erp_90_ipsi_left;
        end
    end
    disp(['Participant number: ' num2str(i)]);
end

for i = 1:6
    topoD{1,i} = squeeze(mean(topoD{1,i}(:,:,[1:3 8:10],:),3,'omitnan')); % Averaging over walls
    topoD{2,i} = squeeze(mean(topoD{2,i}(:,:,4:7,:),3,'omitnan')); % Averaging over walls
end
for i = 1:6
    topoD{1,i} = squeeze(mean(topoD{1,i},1,'omitnan')); % Averaging over participants
    topoD{2,i} = squeeze(mean(topoD{2,i},1,'omitnan')); % Averaging over participants
end

t = [];
for i = 1:size(timeToAnalyze,2)
    [~,tt] = min(abs(UNFOLD{end} - timeToAnalyze(i)));
    t = [t, tt];
end

% % Plotting the results (Within lateralization)
% %------------------------------------
% f = figure;
% f.Position = [100 100 300 800];
% tt = tiledlayout(6,2,'TileSpacing','tight','Padding','tight');
% % title(tt,['Topo plots at ' num2str(timeToAnalyze(1)) 'ms']);
% counter = 0;
% for i = 1:6
%     for i2 = 1:2
%         counter = counter + 1;
%         nexttile(counter)
%         topoplot(mean(topoD{i2,i}(:,t(1):t(2)),2,'omitnan'), EEG.chanlocs, 'numcontour', 6,'electrodes', 'off','style','fill');
%         tmp{i2,i} = mean(topoD{i2,i}(:,t(1):t(2)),2,'omitnan');
%         hold on;
%         x = [0 0];  % X-coordinates for the vertical line (center at x = 0)
%         y = ylim;   % Y-coordinates spanning the entire plot
%         line(x, y, 'Color', 'k', 'LineWidth', 2, 'LineStyle',':');  
%         hold off;
%         colormap(mycmap)
%         shading flat
%         title([titleString{counter}]);
%         clim(colorMinMax);
%     end
% end
% f.Color = [1 1 1];
% cb = colorbar;
% cb.Layout.Tile = 'east';
% cb.Label.String = 'µV';
%
% if exportGraphics
%     exportgraphics(f,['C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\' exportTxt '.pdf'],'ContentType','vector');
% end


% Grouped by Turning Angle
titleStringV2{1}  = 'Incongr., Straight';
titleStringV2{2}  = 'Congr., Straight';
titleStringV2{3}  = 'Incongr., Turning';
titleStringV2{4}  = 'Congr., Turning';

ff = figure;
ff.Position = [100 100 200 700];
tiledlayout(4,1,'TileSpacing','tight','Padding','tight');
counter = 1;
% title(tt,['Topo plots at ' num2str(timeToAnalyze(1)) 'ms']);
for i1 = 1:2
    for i2 = 1:2
        nexttile
        topoplot(meanCellv2(tmp(i1,i2:2:6)), EEG.chanlocs, 'numcontour', 6,'electrodes', 'off','style','fill');
        hold on;
        x = [0 0];  % X-coordinates for the vertical line (center at x = 0)
        y = ylim;   % Y-coordinates spanning the entire plot
        line(x, y, 'Color', 'k', 'LineWidth', 2, 'LineStyle',':');  
        hold off;
        colormap(mycmap)
        shading flat
        title([ titleStringV2{counter}]);
        counter = counter + 1;
        clim(colorMinMax);
        cb = colorbar;
        cb.Location = 'eastoutside';
        cb.Label.String = 'µV';
    end
end
ff.Color = [1 1 1];

if exportGraphics
    exportgraphics(ff,['C:\Users\zadj\OneDrive - Aalborg Universitet\Dokumenter\Google Drev\My papers\_WIP\_2024_Turning_Attention\_FinalPlots\' exportTxt '.pdf'],'ContentType','vector');
end


% Grand average
fff = figure;
fff.Position = [100 100 500 500];
% title(tt,['Topo plots at ' num2str(timeToAnalyze(1)) 'ms']);
topoplot(meanCellv2(tmp), EEG.chanlocs, 'numcontour', 6,'electrodes', 'labels','style','fill');
hold on;
x = [0 0];  % X-coordinates for the vertical line (center at x = 0)
y = ylim;   % Y-coordinates spanning the entire plot
line(x, y, 'Color', 'k', 'LineWidth', 2, 'LineStyle',':');  
hold off;
colormap(mycmap)
shading flat
title('Grand average across conditions');
% clim(colorMinMax);
fff.Color = [1 1 1];
cb = colorbar;
cb.Location = 'eastoutside';
cb.Label.String = 'µV';

%%
mycmap = bemobil_makecmap([ ...
    hex2rgb('#03045e')/255; ...
    hex2rgb('#00b4d8')/255; ...
    hex2rgb('#780000')/255; ...
    hex2rgb('#ef233c')/255; ...
    hex2rgb('#e36414')/255; ...
    hex2rgb('#ffc300')/255; ...
    ],6000);

chan = 1:2; % 1:2 -> PO7/8, 3 -> Oz, 4 -> POz

f = figure;
f.Position = [100 100 1000 180];
tiledlayout(1,3);

nexttile(1)
allERSPs = [];
for i = 1:2 % Conditions [1:2 -> Twenty, 3:4 -> Fortyfive, 5:6 -> Ninety]
    for i2 = 1:size(topoD{i},1) % Participant
        [ersp, ~, ~, times, freqs] = newtimef(...
            topoD{i}(i2,:)',...
            length(UNFOLD{end}),...
            [UNFOLD{end}(1) UNFOLD{end}(end)],...
            250,...
            [3 .3],...
            'plotersp','off',...
            'plotitc', 'off',...
            'verbose', 'off',...
            'powbase', mean(powbaseERSPs{i}{i2}(chan,:),1));
        allERSPs = cat(3,allERSPs, ersp);
    end
end
imagesclogy(times, freqs, mean(allERSPs,3))
axis xy
% colormap(mycmap)
shading interp

nexttile(2)
allERSPs = [];
for i = 3:4
    for i2 = 1:size(topoD{i},1)
        [ersp, ~, ~, times, freqs] = newtimef(...
            topoD{i}(i2,:)',...
            length(UNFOLD{end}),...
            [UNFOLD{end}(1) UNFOLD{end}(end)],...
            250,...
            [3 .3],...
            'plotersp','off',...
            'plotitc','off',...
            'verbose','off',...
            'powbase', mean(powbaseERSPs{i}{i2}(chan,:),1));
        allERSPs = cat(3,allERSPs, ersp);
    end
end
imagesclogy(times, freqs, mean(allERSPs,3))
axis xy
% colormap(mycmap)
shading interp

nexttile(3)
allERSPs = [];
for i = 5:6
    for i2 = 1:size(topoD{i},1)
        [ersp, ~, ~, times, freqs] = newtimef(...
            topoD{i}(i2,:)',...
            length(UNFOLD{end}),...
            [UNFOLD{end}(1) UNFOLD{end}(end)],...
            250,...
            [3 .3],...
            'plotersp','off',...
            'plotitc','off',...
            'verbose','off',...
            'powbase', mean(powbaseERSPs{i}{i2}(chan,:),1));
        allERSPs = cat(3,allERSPs, ersp);
    end
end
imagesclogy(times, freqs, mean(allERSPs,3))
axis xy
% colormap(mycmap)
shading interp
