#include <iostream> 
class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> grid(m, std::vector(n, 0));
        grid[m-1][n-1] = 1;
        for (int idm{m-1}; idm>= 0; --idm){
            for (int idn{n-1}; idn >= 0; --idn){
                if (idn == n-1 && idm == m-1) continue;
                int sum{};
                if (idn + 1 < n) sum += grid[idm][idn+1];
                if (idm + 1 < m) sum += grid[idm+1][idn];
                grid[idm][idn] = sum;
            } 
        }
        return grid[0][0];
    }
};
