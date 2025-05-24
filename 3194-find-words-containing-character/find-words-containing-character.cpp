class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        set<int>s;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    s.insert(i);
                }
            }
        }
        return vector<int>(s.begin(),s.end());
    }
};