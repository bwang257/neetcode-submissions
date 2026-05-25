#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, std::vector<std::string>> mmap;
        for (const auto& str : strs){
            std::vector<char> letters(26, 0);
            std::for_each(str.begin(), str.end(), [&letters](char c){
                letters[c - 'a']++; // incrementing char with vals starting at 0
            });
            std::string key{letters.begin(), letters.end()}; // allows string keys
            mmap[key].push_back(str);
        }
        for (const auto& pair : mmap){
            res.push_back(pair.second);
        }

        return res;
    }
};
