#include <array> 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        std::array<int, 26> cnt = {0};
        for (const auto& c : s) cnt[c - 'a']+=1;
        for (const auto& c: t){
            if (--cnt[c-'a'] == -1) return false;
        }
        return true;
    }
};

