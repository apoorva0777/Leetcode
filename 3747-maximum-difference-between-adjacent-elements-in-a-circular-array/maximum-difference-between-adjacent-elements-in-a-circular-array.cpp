class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxdiff=0;
        int diff=0;
        int cirdiff=0;
        for(int i=0;i<nums.size()-1;i++){
            diff=abs(nums[i+1]-nums[i]);
            cirdiff=abs(nums[nums.size()-1]-nums[0]);
            maxdiff=max({maxdiff,diff,cirdiff});
        }
        return maxdiff;

    }
};