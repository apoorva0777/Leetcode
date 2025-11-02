class Solution {
public:
    int t[101];
    int ans(vector<int>& nums,int i){
      
        if(i>=nums.size()){
            return 0;
        }
        if(t[i]!=-1)return t[i];
        int inc=nums[i]+ans(nums,i+2);
        int exc=ans(nums,i+1);
        return t[i]=max(inc,exc);
    } 
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return ans(nums,0);
    }
};