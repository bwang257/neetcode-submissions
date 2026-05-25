class Solution {
public:
    bool isPalindrome(string s) {
        int pt1{0};
        int pt2 = s.size()-1;
        while (pt1 <= pt2){
            while (pt1 <= pt2 && !std::isalnum(s[pt1])){
                ++pt1;
            }
            while (pt1 <= pt2 && !std::isalnum(s[pt2])){
                --pt2;
            }
            if (pt1 <= pt2 && std::tolower(s[pt1]) != std::tolower(s[pt2])){
                return false;
            }
            ++pt1;
            --pt2;
        }
        return true;
    }
};
