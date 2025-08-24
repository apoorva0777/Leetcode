class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string word=strs[i];
            string sortedword=word;
            sort(sortedword.begin(),sortedword.end());
            mp[sortedword].push_back(word);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};