class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < (1 << n); i++) {  // Iterate through all subsets
            vector<int> subset;
            for (int num = 0; num < n; num++) { // Check each bit
                if (i & (1 << num)) { // If bit is set, include nums[num]
                    subset.push_back(nums[num]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};