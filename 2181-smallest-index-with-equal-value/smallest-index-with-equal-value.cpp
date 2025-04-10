class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int res=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==i%10){
                res=i;
                break;
        }
        }
        return res;
    }
};