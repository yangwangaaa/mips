% Simple script to plot the trend of a specific variable saved in ALL .mat
% files located in the root folder.

close all

Files = dir(fullfile('.','*.mat'));

varname = 'mean(J_history,1)';
varbound = -inf;

figure, hold all, title('Average Return')
for current_file = {Files.name}
    load(current_file{:});
    try
        plot(max(eval(varname), varbound), 'displayname', current_file{:})
    catch
        warning(['Variable "' varname '" does not exist in file "' current_file{:} '".'])
    end
end

legend show