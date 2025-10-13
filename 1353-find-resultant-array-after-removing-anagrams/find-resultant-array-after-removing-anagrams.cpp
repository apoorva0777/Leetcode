class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result;
        string prev="";


        for(string wrd:words){
            string sorted=wrd;
            sort(sorted.begin(),sorted.end());
            if(prev!=sorted){
                result.push_back(wrd);
                prev=sorted;
            }
        }
        return result;
    }
};