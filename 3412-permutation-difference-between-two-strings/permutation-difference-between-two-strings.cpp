class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']=i;
        }
        int totaldiff=0;
        for(int i=0;i<t.size();i++){
            totaldiff+=abs(i-hash[t[i]-'a']);
        }
        return totaldiff;
    }
};