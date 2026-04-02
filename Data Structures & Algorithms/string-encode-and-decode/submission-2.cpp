class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto&it:strs){
            s+=(it+"~");
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";
        for(auto& it:s){
            if(it=='~'){
                ans.push_back(temp);
                temp = "";
            }
            else temp+=it;
        }
        return ans;
    }
};
