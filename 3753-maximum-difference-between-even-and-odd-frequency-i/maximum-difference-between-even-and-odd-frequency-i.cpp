class Solution {
public:
    int maxDifference(string s) {
        int hash[126]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<126;i++){
            if(hash[i]%2!=0){
                maxi=max(maxi,hash[i]);
            }
            else if(hash[i]%2==0&&hash[i]>0){
                mini=min(mini,hash[i]);
            }
        }
        return maxi-mini;
    }
};