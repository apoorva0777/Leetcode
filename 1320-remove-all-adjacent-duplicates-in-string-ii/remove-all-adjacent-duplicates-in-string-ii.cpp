class Solution {
public:
    bool checkchar(string &ans,int k,char newchar){
        int it=ans.size()-1;
        for(int i=0;i<k-1;i++){
            if(newchar!=ans[it])return false;
            it--;
        }
        return true;
    } 
    string removeDuplicates(string s, int k) {
        string ans="";
        for(int i=0;i<s.length();i++){
            char newchar=s[i];
            if(ans.size()<k-1){
                ans.push_back(newchar);
            }else{
                if(checkchar(ans,k,newchar)){
                    for(int j=0;j<k-1;j++){
                        ans.pop_back();
                    }
                }else{
                    ans.push_back(newchar);
                }
            }
        }
        return ans;
    }
};