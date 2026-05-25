class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> val_cnt;
        std::unordered_map<int, std::vector<int>> cnt_vals;
        for (const auto& num : nums) val_cnt[num]++;
        for (const auto& pair : val_cnt){
            // val --> cnt ==> cnt --> val, val, ...
            if (cnt_vals.count(pair.second)) cnt_vals[pair.second].push_back(pair.first);
            else cnt_vals[pair.second] = {pair.first};
        }

        std::vector<int> ans;
        for (size_t cnt{nums.size()}; cnt > 0 && k > 0; --cnt){
            k-=(cnt_vals[cnt].size());
            ans.insert(ans.end(), cnt_vals[cnt].begin(), cnt_vals[cnt].end());
        }
        return ans;
    }
};
