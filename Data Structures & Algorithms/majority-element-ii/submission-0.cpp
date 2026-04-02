class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/3;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto& it:nums){
            mp[it]++;
        }
        for(auto& it:mp){
            if(it.second>k) ans.push_back(it.first);
        }
        return ans;
    }
};