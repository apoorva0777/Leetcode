class Solution {
public:
    bool isvowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    long long countOfSubstrings(string word, int k) {
        int n=word.size(),i=0,j=0,cons=0;
        long long res=0;

        vector<int>nxt(n);
        int ind=n;

        for(int m=n-1;m>=0;m--){
            nxt[m]=ind;
            if(!isvowel(word[m])) ind=m;
        }
        unordered_map<char,int>mp;

        while(i<n){
            if(isvowel(word[i])){
                mp[word[i]]++;
            }else{
                cons++;
            }

            while(j<=i&&cons>k){
                if(isvowel(word[j])){
                    mp[word[j]]--;
                    if(mp[word[j]]==0) mp.erase(word[j]);
                }else{
                    cons--;
                }
                j++;
            }
            while(j<i && mp.size()==5 && cons==k){
                res+=nxt[i]-i;
                if(isvowel(word[j])){
                    mp[word[j]]--;
                    if(mp[word[j]]==0) mp.erase(word[j]);
                }
                else{
                    cons--;
                }
                j++;
            }
            i++;
        }
        return res;
        }
};