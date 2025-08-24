class Solution {
public:
    static bool mycomp(string a,string b){
        string c=a+b;
        string d=b+a;
        return c>d;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto s:nums){
            snums.push_back(to_string(s));
        }
        sort(snums.begin(),snums.end(),mycomp);
        if(snums[0]=="0") return "0";
        string ans="";
        for(auto it:snums){
            ans+=it;
        }
        return ans;
    }
};