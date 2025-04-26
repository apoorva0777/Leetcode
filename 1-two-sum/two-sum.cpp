class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int remain=target-nums[i];
            if(mp.find(remain)!=mp.end()){
                v.push_back(mp[remain]);
                v.push_back(i);
            }else{
                mp[nums[i]]=i;
            }
        }
        return v;
    }
};