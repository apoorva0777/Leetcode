class Solution {
public:
    long long coloredCells(int n) {
       long long p = n;
        return p*p + (p-1)*(p-1);
    }
};