class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long totalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long largest = nums[i];
            long long smallest = nums[i];
            for (int j = i; j < nums.size(); j++) {
                largest = max(largest, (long long)nums[j]);
                smallest = min(smallest, (long long)nums[j]);
                totalSum += (largest - smallest);
            }
        }
        return totalSum;
    }
};
