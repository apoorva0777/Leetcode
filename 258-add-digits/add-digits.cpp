class Solution {
public:
    int addDigits(int num) {
        int cnt;
        int sum=0;
        while(num>=10){
            sum=0;
            while(num!=0){
            sum+=num%10;
            num=num/10;
            cnt++;
            }
            num=sum;
        }
        return num;

    }
};