class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string ans="";
       
        int ind=0;
        while(ind<first.length() && ind<last.length()){
            if(first[ind]==last[ind]){
                ans+=first[ind];
                ind++;
            }else{
                break;
            }
        }
        return ans;
    }
};