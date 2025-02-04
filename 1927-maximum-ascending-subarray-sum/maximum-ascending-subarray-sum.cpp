class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum=0;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[j-1]){
                    current+=nums[j];
                }else{
                    break;
            }
            }
            
        
        maxsum=max(current,maxsum);
        }
        
    return maxsum;
    }
};