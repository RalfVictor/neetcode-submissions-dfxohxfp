class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto& it:nums){
            mp[it]++;
        }
        vector<pair<int,int>> temp;
        for(auto& it:mp){
            temp.push_back({it.second,it.first});
        }
        sort(temp.rbegin(),temp.rend());
        int i = 0;
        for(auto it:temp){
            if(i==k) break;
            ans.push_back(it.second);
            i++;
        }
        return ans;
    }
};
