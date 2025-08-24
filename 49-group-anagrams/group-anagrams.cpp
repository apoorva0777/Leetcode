class Solution {
public:
    array<int,256> hash(string s){
        array<int,256> hash={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,256>,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            mp[hash(strs[i])].push_back(strs[i]);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};