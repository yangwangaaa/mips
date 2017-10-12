% Step-based REPS.
%
% =========================================================================
% REFERENCE
% J Peters, K Muelling, Y Altun
% Relative Entropy Policy Search (2010)

bfsV = @(varargin)basis_poly(2,mdp.dstate,1,varargin{:});
% bfsV = @(varargin)basis_krbf(5, [mdp.stateLB, mdp.stateUB], 0, varargin{:});
% bfsV = @(varargin)basis_krbf(3, [-20 20; -20 20], 0, varargin{:});

solver = REPSavg_Solver(0.5,bfsV);

nmax = episodes_learn * steps_learn;
data = [];
varnames = {'r','s','nexts','a'};
bfsnames = { {'phiP', @(s)policy.basis1(s)}, {'phiV', bfsV} };
iter = 1;

%% Learning
while iter < 1500
    
    [ds, J] = collect_samples(mdp, episodes_learn, steps_learn, policy);
    entropy = policy.entropy([ds.s]);
    data = getdata(data,ds,nmax,varnames,bfsnames);

    [d, divKL] = solver.optimize(data.r, data.phiV, data.phiV_nexts);
    policy = policy.weightedMLUpdate(d, data.a, data.phiP);

    J = evaluate_policies(mdp, episodes_eval, steps_eval, policy.makeDeterministic);
    J_history(iter) = J(robj);
    fprintf('%d ) Entropy: %.2f, KL: %.2f, J: %.4f\n', iter, entropy, divKL, J(robj))
    
    iter = iter + 1;
    
end

%%
plot(J_history)
show_simulation(mdp, policy.makeDeterministic, 100, 0.01)