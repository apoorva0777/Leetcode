class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[256]={0};
        for(char ch:s){
            hash[ch]++;
        }
        for(char ch:t){
            hash[ch]--;
            if(hash[ch]<0){
                return ch;
            }
        }
        return ' ';
    }
};