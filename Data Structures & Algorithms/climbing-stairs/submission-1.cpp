class Solution {
public:

    int dp(int n, std::vector<int>& cache){
        if (n == 1) return 1;
        if (n == 2) return 2;
        else {
            if (cache[n] != -1) return cache[n];
            else return dp(n-1, cache) + dp(n-2, cache);
        }
    }

    int climbStairs(int n){   
        std::vector<int> cache(n+1, -1);
        return dp(n, cache); 
    }
};
