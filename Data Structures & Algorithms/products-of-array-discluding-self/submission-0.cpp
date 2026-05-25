class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        std::vector<int> fwd_prod(n+1, 1);
        std::vector<int> bwd_prod(n+1, 1);
        std::vector<int> ans;

        for (int idx{0}; idx < n; ++idx) fwd_prod[idx+1] = nums[idx] * fwd_prod[idx];
        for (int idx{n-1}; idx >= 0; --idx) bwd_prod[idx] = nums[idx] * bwd_prod[idx+1]; 
        for (int idx{0}; idx < n; ++idx) ans.emplace_back(fwd_prod[idx] * bwd_prod[idx+1]);

        return ans;
    }
};


/*
[1,2,4,6], size n

// create 2 vectors of size n+1, init to 1
fwd_prod
bwd_prod

// iterate through twice, computing this, starting 
// from index 1 (or n-1)

create ans vector
for i=0, i < n
ans[0] = fwd_prod[0] * bwd_prod[1]
ans[i] = fwd_prod[i] * bwd_prod[i+1]
...

return ans;

Logic, 1, 2, 3, 4 represent values, (1) represents number 1
1234 is product of 1, 2, 3, 4
[(1), 1, 12, 123, 1234] --> fwd product
[1234, 234, 34, 4, (1)] --> backward product

[234, 134, 124, 123] --> desired result
*/


