/*
int ans{0}
int start{0}

iterate through the characters 
    create hashset
        while no duplicates are encountered
            map the char to the index it was seen
        if the char has been seen before we record the curr length and update ans
        if start is before the last instance of the duplicate, update start to 1+the last instance of the duplicate

if end- start greater than ans, update ans

return ans
*/

#include <array> 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans{0};
        int start{0};
        int idx{0};

        // 127 - 32 + 1 = 96
        std::array<int, 96> prev_indexes = {-1};

        //range of printable ASCII characters 32-127

        while (idx < s.size()){
            std::unordered_set<char> seen;
            while (idx < s.size()){
                if (!seen.count(s[idx])){
                    seen.insert(s[idx]);
                    prev_indexes[s[idx] - 32] = idx;
                    idx++;
                } else {
                    int curr_len = idx - start;
                    ans = curr_len > ans ? curr_len : ans; 
                    if (idx < s.size()) start = std::max(start, prev_indexes[s[idx]-32]+1);
                    if (idx < s.size()) prev_indexes[s[idx]-32] = idx;
                    idx++; 
                }
            }

        }
        ans = (s.size() - start)  > ans ? (s.size() - start) : ans;

        return ans;
    }
};



