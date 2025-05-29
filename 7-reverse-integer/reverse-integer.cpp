class Solution {
public:
    int reverse(int x) {
        long rev=0;
        long y=(x);
        while(y!=0){   
        if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev=rev*10+y%10;
            y=y/10;
        }
        return rev;
        
    }
};