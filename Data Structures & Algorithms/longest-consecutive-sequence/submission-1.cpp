/*
a number can only start if num-1 does not exist

worst case all numbers are unique and its O(n)
worst case all numbers are in a sequence and you have O(n)
*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (const auto& num : nums) seen.insert(num);
        int ans{0};
        for (const auto& num : nums){
            if (seen.count(num-1)) continue;
            int cnt{1};
            for (int next{1}; seen.count(num+next); ++next) ++cnt;
            if (cnt > ans) ans = cnt;   
        }
        return ans; 
    }
};
