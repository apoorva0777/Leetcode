class Solution {
public:
    int houserob(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        int case1=nums[i]+houserob(nums,i+2,dp);
        int case2=0+houserob(nums,i+1,dp);
        return dp[i]=max(case1,case2);

    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return houserob(nums,0,dp);
    }
};