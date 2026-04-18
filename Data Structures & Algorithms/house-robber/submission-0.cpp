class Solution {
public:
    int dfs(int i,vector<int>& nums,vector<int>& dp){
        if(i<0){
            if(i==0) return nums[0];
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int take = nums[i]+dfs(i-2,nums,dp);
        int notake = dfs(i-1,nums,dp);
        return dp[i] = max(take,notake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return dfs(n-1,nums,dp);
    }
};
