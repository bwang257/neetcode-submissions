#include <unordered_set>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans;
        int size{nums.size()};
        ans.resize(2* size);
        for (int i{}; i < size; ++i){
            ans[i] = nums[i];
            ans[i+size] = nums[i]; 
        }
        return ans;
    }
};