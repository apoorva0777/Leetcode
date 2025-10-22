class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<=s.size();i++){
            string a="";
            int hash[256]={0};
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1){
                    break;
                }
                    hash[s[j]]=1;
                    a+=s[j];
                    maxlen=max(maxlen,(int)a.size());
            }
        }
        return maxlen;
    }
};