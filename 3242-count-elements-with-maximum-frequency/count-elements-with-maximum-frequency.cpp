class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        int count=0;
        if(nums.size()==1){
            return 1;
        }
        unordered_map<int,int> mp;
         for (int num : nums) {
            mp[num]++;
            maxi = max(maxi, mp[num]);
         }
        for(auto it:mp){
            if(it.second==maxi){
                count+=it.second;
            }
        }
        
    return count;
    }
};