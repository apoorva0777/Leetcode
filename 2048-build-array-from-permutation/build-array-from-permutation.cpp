class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            s.push_back(nums[nums[i]]);
        }
        return s;
    }
};