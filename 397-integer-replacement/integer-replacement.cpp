class Solution {
public:
    int integerReplacement(int n) {
        long num=n;
        int cnt1=0;
        while(num!=1){
            if(num%2==0){
                num=num/2;
                cnt1++;
            }else{
                if(num==3 || (num-1)%4==0){
                    num-=1;
                    cnt1++;
                }else{
                    num+=1;
                    cnt1++;
                }
            }
        }
        return cnt1;

    }
};