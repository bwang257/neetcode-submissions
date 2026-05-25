class Solution {
public:
    int minCostClimbingStairs(vector<int>& costs) {
        // technically start at index -1
        // can go to index idx + 1, or idx +2
        // iterate from the back, get min cost at each step
        costs.push_back(0);
        // [10, 15, 20, 0]
        for (int i = costs.size()-4; i >= 0; --i){
            costs[i] += std::min(costs[i+1], costs[i+2]);
        }
        return std::min(costs[0], costs[1]);
    }
};