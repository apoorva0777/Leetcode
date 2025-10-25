class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxsum=0;
        for(int i=0;i<s.size();i++){
            int hash[256]={0};
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1)break;
                hash[s[j]]++;
                
            maxsum=max(maxsum,j-i+1);
            }
        }
        return maxsum;
    }

};