class KthLargest {
public:
    KthLargest(int k, vector<int>& nums)  : k{k} {
        for (const auto& num : nums) pq.push(num);
    }
    
    int add(int val) {
        std::vector<int> temp;
        pq.push(val);
        for (int i{}; i < k-1; i++){
            temp.push_back(pq.top());
            pq.pop();
        }
        int res = pq.top();
        for (const auto& num : temp) pq.push(num);
        return res;    
    }
    int k;

private:
    std::priority_queue<int> pq;
};



/// 3, 5, 6 --> 6 