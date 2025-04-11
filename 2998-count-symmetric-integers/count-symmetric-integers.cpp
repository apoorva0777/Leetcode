class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(check(i)){
                ans+=1;
            }
        }
        return ans;
    }
    bool check(int n){
        string m=to_string(n);
         if ((m.size()) % 2 != 0) return false;
        int fsum=0,esum=0;
        int mid=(m.size())/2;
        for(int i=0;i<mid;i++){
            fsum+=m[i]-'0';
            esum+=m[i+mid]-'0';
        }
        return fsum==esum;
    }
};