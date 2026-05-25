class Solution {
public:
    // int climbStairs(int n) {
    //     std::unordered_map<int, int> step_count{{1,1}, {2,2}};
    //     for (int step{3}; step <= n; step++){
    //         step_count[step] = step_count[step-1] + step_count[step-2];
    //     }
    //     return step_count[n];

    int dp(int n, std::vector<int>& cache){
        if (n == 1) return 1;
        if (n == 2) return 2;
        else {
            if (cache[n] != -1) return cache[n];
            else{
                cache[n] = dp(n-1, cache) + dp(n-2, cache);
                return cache[n];
            }
        }
    }

    int climbStairs(int n){   
        std::vector<int> cache(n+1, -1);
        return dp(n, cache); 
    }
};
