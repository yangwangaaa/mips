classdef gaussian_chol_linear < policy
% GAUSSIAN_CHOL_LINEAR Gaussian distribution with linear mean and constant 
% covariance: N(K*phi,S).
% Parameters: mean K and Cholesky decomposition A, with S = A'A.
    
    properties(GetAccess = 'public', SetAccess = 'private')
        basis;
    end
    
    methods
        
        function obj = gaussian_chol_linear(basis, dim, init_k, init_cholA)
            assert(isscalar(dim))
            assert(feval(basis) == size(init_k,2))
            assert(dim == size(init_k,1))
            assert(size(init_cholA,1) == dim)
            assert(size(init_cholA,2) == dim)
            assert(istriu(init_cholA))
            
            obj.basis = basis;
            obj.dim = dim;
            init_tri = init_cholA';
            init_tri = init_tri(tril(true(dim), 0)).';
            obj.theta = [init_k(:); init_tri'];
            obj.dim_explore = length(init_tri);
        end
        
        function probability = evaluate(obj, state, action)
            phi = feval(obj.basis, state);
            n_k = obj.dim*feval(obj.basis);
            k = vec2mat(obj.theta(1:n_k),obj.dim);
            mu = k*phi;
            indices = tril(ones(obj.dim));
            cholA = indices;
            cholA(indices == 1) = obj.theta(n_k+1:end);
            cholA = cholA';
            probability = mvnpdf(action, mu, cholA'*cholA);
        end
        
        function action = drawAction(obj, state)
            phi = feval(obj.basis, state);
            n_k = obj.dim*feval(obj.basis);
            k = vec2mat(obj.theta(1:n_k),obj.dim);
            mu = k*phi;
            indices = tril(ones(obj.dim));
            cholA = indices;
            cholA(indices == 1) = obj.theta(n_k+1:end);
            cholA = cholA';
            action = mvnrnd(mu,cholA'*cholA)';
        end
        
        %%% Differential entropy, can be negative
        function S = entropy(obj, state)
            n_k = obj.dim*feval(obj.basis);
            indices = tril(ones(obj.dim));
            cholA = indices;
            cholA(indices == 1) = obj.theta(n_k+1:end);
            cholA = cholA';
            S = 0.5*log( (2*pi*exp(1))^obj.dim * det(cholA'*cholA) );
        end
        
        %%% Derivative of the logarithm of the policy
        function dlogpdt = dlogPidtheta(obj, state, action)
            if (nargin == 1)
                dlogpdt = size(obj.theta,1);
                return
            end
            phi = feval(obj.basis, state);
            n_k = obj.dim*feval(obj.basis);
            k = vec2mat(obj.theta(1:n_k),obj.dim);
            mu = k*phi;
            indices = tril(ones(obj.dim));
            cholA = indices;
            cholA(indices == 1) = obj.theta(n_k+1:end);
            cholA = cholA';
            invA = inv(cholA);
            invsigma = invA * invA';
            
            dlogpdt_k = invsigma * (action - k * phi) * phi';
            
            R = invA' * (action - mu) * (action - mu)' * invsigma;
            dlogpdt_sigma = zeros(obj.dim);
            for j = 1 : obj.dim
                for i = 1 : j
                    if i == j
                        dlogpdt_sigma(i,j) = R(i,j) - 1 / cholA(i,i);
                    else
                        dlogpdt_sigma(i,j) = R(i,j);
                    end
                end
            end
            
            dlogpdt_sigma_v = dlogpdt_sigma';
            dlogpdt_sigma_v = dlogpdt_sigma_v(tril(true(obj.dim), 0)).';
            
            dlogpdt = [dlogpdt_k(:); dlogpdt_sigma_v'];
        end
        
        function obj = update(obj, direction)
            obj.theta = obj.theta + direction;
        end
        
        function obj = makeDeterministic(obj)
            n_k = obj.dim*feval(obj.basis);
            obj.theta(n_k+1:end) = 1e-8;
        end
        
        function obj = weightedMLUpdate(obj, weights, Action, Phi)
            assert(min(weights)>=0) % weights cannot be negative
            Sigma = zeros(obj.dim);
            D = diag(weights);
            N = size(Action,1);
            W = (Phi' * D * Phi + 1e-8 * eye(size(Phi,2))) \ Phi' * D * Action;
            W = W';
            for k = 1 : N
                Sigma = Sigma + (weights(k) * (Action(k,:)' - W*Phi(k,:)') * (Action(k,:)' - W*Phi(k,:)')');
            end
            Z = (sum(weights)^2 - sum(weights.^2)) / sum(weights);
            Sigma = Sigma / Z;
            Sigma = nearestSPD(Sigma);
            cholA = chol(Sigma);
            tri = cholA';
            tri = tri(tril(true(obj.dim), 0)).';
            obj.theta = [W(:); tri'];
        end
        
        function obj = randomize(obj, factor)
            n_k = obj.dim*feval(obj.basis);
            obj.theta(n_k+1:end) = obj.theta(n_k+1:end) .* factor;
        end
        
    end
    
end
