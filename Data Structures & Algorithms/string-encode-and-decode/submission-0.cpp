/*
encode:
initialize an empty string res
for each string in strs:
    res += string size
    res += some deliminator
    res += string
return string

decode:
int idx
vector ans
while idx is not at the end of sthe string
    read next string[idx to delimeter] bytes and convert that to a string
    append that to ans
return ans
*/

#define md '#'

class Solution {
public:

    string encode(vector<string>& strs) {
        std::string res{""};
        for (auto& str : strs) res += (std::to_string(str.size()) + md + str); 
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int idx{0};
        while (idx < s.size()){
            std::string to_read{""};
            while (s[idx]!= md){
                to_read+=s[idx++];
            }
            ++idx; 
            int num_read = std::stoi(to_read);
            if (num_read){
                std::string to_add{s.begin() + idx, s.begin() + idx + num_read};
                ans.push_back(std::move(to_add));
            } else ans.emplace_back("");
            idx += num_read; 
        }

        return ans;
    }
};
