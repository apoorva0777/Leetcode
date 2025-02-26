class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,minsum=0,maxsum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<minsum){
                minsum=sum;
            }
        }
        return abs(maxsum-minsum);
    }
};