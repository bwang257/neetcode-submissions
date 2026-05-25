#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, int> mmap;
        for (const auto& str : strs){
            std::string copy = str;
            std::sort(copy.begin(), copy.end());
            if (mmap.count(copy)){
                res[mmap[copy]].emplace_back(str);
            } else {
                mmap.insert({copy, res.size()});
                res.push_back({str});
            }
        }
        return res;
    }
};
