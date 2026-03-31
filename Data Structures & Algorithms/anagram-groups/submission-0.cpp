class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
