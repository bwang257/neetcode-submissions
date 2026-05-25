#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for num, check if its difference is in the hashmap, if yes, YAY, if no, add
        std::unordered_map<int, int> mymap;
        for (int idx{}; idx < nums.size(); ++idx){
            if (mymap.count(target - nums[idx])) return {mymap[target - nums[idx]], idx};
            mymap.insert({nums[idx], idx});
        }
        return {};
    }
};
