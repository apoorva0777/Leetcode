class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n=num/2;
        if(num==0)return true;
        for(int i=n;i<num;i++){
            string s= to_string(i);
            reverse(s.begin(),s.end());
            int m=stoi(s);
            if((m+i)==num){
                return true;
            }
        }
        return false;
    }
};