class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(i<j && nums[i]<nums[j]){
                    maxdiff=max(maxdiff,nums[j]-nums[i]);
                }
            }
        }
        return maxdiff;
    }
};