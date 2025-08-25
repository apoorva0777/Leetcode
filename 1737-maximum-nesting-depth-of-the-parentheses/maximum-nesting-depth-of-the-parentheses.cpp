class Solution {
public:
    int maxDepth(string s) {
        int maxcnt=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                maxcnt=max(cnt,maxcnt);
            }else if(s[i]==')'){
                cnt--;
            }
        }
        return maxcnt;
    }
};