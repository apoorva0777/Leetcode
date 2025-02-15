class Solution {
public:
    bool canPartition(string &num, int target, int index, int currentSum) {
    if (index == num.size()) 
        return currentSum == target;
    
    int sum = 0;
    for (int j = index; j < num.size(); ++j) {
        sum = sum * 10 + (num[j] - '0');
        if (sum > target) break;
        if (canPartition(num, target, j + 1, currentSum + sum)) 
            return true;
    }
    return false;
}

int punishmentNumber(int n) {
    int totalSum = 0;
    
    for (int i = 1; i <= n; ++i) {
        int square = i * i;
        string squareStr = to_string(square);
        
        if (canPartition(squareStr, i, 0, 0)) {
            totalSum += square;
        }
    }
    
    return totalSum;
}
};