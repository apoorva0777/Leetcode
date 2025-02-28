class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int hash[256]={0};
        for(char ch:s){
            hash[ch]++;
        }
        for(char ch:t){
            hash[ch]--;
        }
        for(int i=0;i<256;i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};