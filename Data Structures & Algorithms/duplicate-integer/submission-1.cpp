// given list of numbers, return if any duplicates exist

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> dups;
        for (const int& num: nums){
            if (dups.count(num)) return true;
            dups.insert(num);
        }
        return false;
    }
};