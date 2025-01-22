class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            bool leftCheck = (i == 0 || nums[i - 1] < nums[i]);
            bool rightCheck = (i == n - 1 || nums[i] > nums[i + 1]);

            if (leftCheck && rightCheck) {
                return i;
            }
        }

        return -1;
    }
};