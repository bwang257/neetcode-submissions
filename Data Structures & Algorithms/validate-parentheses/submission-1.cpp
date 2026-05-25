class Solution {
public:
    bool isValid(string s) {
        std::stack<char> seen;
        for (auto& c : s){
            if (c == '[') seen.push(']');
            else if (c == '(') seen.push(')');
            else if (c == '{') seen.push('}');
            else {
                if (seen.empty() || c != seen.top()){
                    return false;
                }
                seen.pop();
            }
        }
        return seen.empty();
    }
};
