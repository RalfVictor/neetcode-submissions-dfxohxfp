class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int a = 0;
        vector<int> temp;
        for(auto& i:nums){
            if(mp[i]==1) continue;
            mp[i]++;
            temp.push_back(i);
            a++;
        }
        nums = temp;
        return a;
    }
};