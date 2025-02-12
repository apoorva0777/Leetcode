class Solution {
public:
    int getDigitsum(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        int result=-1;

        unordered_map<int, int>mp;
        for(int i=0;i<n;i++){
            int digitsum=getDigitsum(nums[i]);

            if(mp.count(digitsum)){
                result=max(result,nums[i]+mp[digitsum]);
            }
            mp[digitsum]=max(mp[digitsum],nums[i]);
        }
        return result;
    }
};