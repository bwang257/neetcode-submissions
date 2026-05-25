class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_map<int, int> cnts;
        int ans{0};
        for (auto num : nums){
            if (cnts[num]) continue;
            cnts[num] = cnts[num+1] + cnts[num-1] + 1;
            cnts[num + cnts[num+1]] = cnts[num];
            cnts[num - cnts[num-1]] = cnts[num];
            ans = std::max(ans, cnts[num]);
        }
        return ans;

    }
};
