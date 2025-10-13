class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>srword=words;
        for(int i=0;i<srword.size();i++){
            sort(srword[i].begin(),srword[i].end());
        }

        for(int i=1;i<words.size();){
            if(srword[i]==srword[i-1]){
                words.erase(words.begin()+i);
                srword.erase(srword.begin()+i);
            }else{
                i++;
            }
        }
        return words;
    }
};