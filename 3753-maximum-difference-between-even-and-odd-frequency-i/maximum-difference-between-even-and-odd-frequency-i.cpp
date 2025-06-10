class Solution {
public:
    int maxDifference(string s) {
        int hash[126]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
        int maxstr=0,minstr=INT_MAX;
        for(int i=0;i<126;i++){
            if(hash[i]%2!=0){
                maxstr=max(maxstr,hash[i]);
            }
            else if(hash[i]%2==0&&hash[i]>0){
                minstr=min(minstr,hash[i]);
            }
        }
        return maxstr-minstr;
    }
};