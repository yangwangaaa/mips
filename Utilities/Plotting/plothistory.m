function plothistory(sample_history)
% PLOTHISTORY Given some samples collected during at different time steps 
% (iterations), it plots the mean and std at each step.
%
%    INPUT
%     - sample_history : [N x ITER] matrix, where N is the number of 
%                        samples collected per iteration and ITER is the 
%                        number of iterations

[N, ITER] = size(sample_history);
shadedErrorBar(1:ITER, ...
    mean(sample_history), ...
    std(sample_history), ...
    {'LineWidth', 2'}, 0.1);
xlabel('Iterations')
ylabel('Average value')