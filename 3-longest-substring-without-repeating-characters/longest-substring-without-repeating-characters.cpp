class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength=0;
        for(int i=0;i<s.size();i++){
            int hash[256]={0};
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1) break;
                    int len=j-i+1;
                    maxlength=max(len,maxlength);
                    hash[s[j]]=1;
            }
        }
        return maxlength;
    }
};