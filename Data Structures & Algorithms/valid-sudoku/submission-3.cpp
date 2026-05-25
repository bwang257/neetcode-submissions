#include <iostream>
#include <array> 

#define SIZE 9

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int cnt{};
        std::vector<std::vector<int>> rows(9, std::vector<int>(9, 0));
        std::vector<std::vector<int>> cols(9, std::vector<int>(9, 0));

        // iterate by 3 x 3 grid, while also go throgh the rows and cols
        for (int y{0}; y < SIZE; y+=3){
            int x{};      
            for (int times{}; times < 3; ++times){
                std::array<int, 9> seen = {};
                for (int idx{x}; idx < x+3; ++idx){
                    for (int idy{y}; idy < y+3; ++idy){
                        char val = board[idy][idx];
                        if (val == '.') continue;
                        if (seen[val-'1']) return false;
                        if (rows[idy][val-'1']) return false;
                        if (cols[idx][val-'1']) return false;
                        seen[val-'1']++; 
                        rows[idy][val-'1']++;
                        cols[idx][val-'1']++;
                    }
                }
                x+=3;
            }
        }
        return true;
    }
};

