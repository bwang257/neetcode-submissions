#include <iostream>
#include <array> 

#define SIZE 9

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int cnt{};
        std::vector<std::vector<int>> rows(9, std::vector<int>(9, 0));
        std::vector<std::vector<int>> cols(9, std::vector<int>(9, 0));

        // iterate by 3 x 3 grid
        for (int y{0}; y < SIZE; y+=3){
            int x{};      
            for (int times{}; times < 3; ++times){
                std::array<int, '9'+1 > seen = {};
                for (int idx{x}; idx < x+3; ++idx){
                    for (int idy{y}; idy < y+3; ++idy){
                        char val = board[idy][idx];
                        if (val == '.') continue;
                        if (seen[val]){
                            // std::cout << "Error occured at " << idy << ", " << idx << "\n";
                            return false;
                        }
                        if (rows[idy][val-'1']){
                            // std::cout << "Rows Error occured at " << idy << ", " << idx << "\n";
                            return false;
                        }
                        if (cols[idx][val-'1']){
                            // std::cout << "Cols Error occured at " << idy << ", " << idx << "\n";
                            return false;
                        }
                        seen[val]++; 
                        rows[idy][val-'1']++;
                        cols[idx][val-'1']++;
                        cnt+=1;
                    }
                }
                x+=3;
            }
        }

        std::cout << cnt << "\n";
        return true;
    }
};

/*
while x< n, y < n
        hashset
        for idx= x, idx < x+3 , ++idx
            for idy = y, idy < y + 3, ++idy
                add to hashset
                if in hashset already, then return false

        y+=3
        x+=3

iterate through rows
iterate through cols



        starting at y,x
        got to [y][x], [y][x+1], [y][x+2], [y+1][x], [y+1][x+1], [y+1][x+2], [y+2][x], [y+2][x+1], [y+2][x+2]


board[0][0], board[0][1], board[0][2],
board[1][0], board[1][1], board[1][2],
board[2][0], board[2][1], board[2][2],

board[0][3], board[0][1], board[0][2],
board[1][3], board[1][1], board[1][2],
board[2][3], board[2][1], board[2][2],

*/

