class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cur = 0;
        int res = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(auto& i:nums){
            cur+=i;
            int dif = cur-k;
            res+=mp[dif];
            mp[cur]++;
        }
        return res;
    }
};