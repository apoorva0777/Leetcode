class Solution {
public:
    void solve(vector<int>& nums,int index,int cxor,int &sum){
        if(index==nums.size()){
            sum+=cxor;
            return;
        }
        solve(nums,index+1,cxor^nums[index],sum);

        solve(nums,index+1,cxor,sum);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        solve(nums,0,0,sum);
        return sum;
    }
};