class Solution {
public:
    int lutera(vector<int>&nums,int i,vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
      
        if(dp[i]!=-1)return dp[i];
        int include=nums[i]+lutera(nums,i+2,dp);
        int exclude=0+lutera(nums,i+1,dp);
        dp[i]=max(include,exclude);
        return dp[i];
    } 
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size()+1,-1);
        return lutera(nums,i,dp);
    }
};