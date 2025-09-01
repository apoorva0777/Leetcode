class Solution {
public: 
    int rob(vector<int>& nums) {
        int next1=0;
        int next2=0;
        for(int i=nums.size()-1;i>=0;i--){
            int include=nums[i]+next2;
            int exclude=0+next1;
            int curr=max(include,exclude);
            next2=next1;
            next1=curr;
        }
        return next1;
    }
};