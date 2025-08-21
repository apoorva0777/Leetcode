class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[256]={0};
        for(auto it:s){
            hash[it]++;
        }
        for(auto it:t){
            hash[it]--;
        }
        for(auto g:hash){
            if(g!=0)return false;
        }
        return true;
    }
};