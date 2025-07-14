class Solution {
public:

    bool match(const string&s,const string&p,int i,int j,vector<vector<int>>&dp){
        if(i<0 && j<0)return true;
        if(dp[i+1][j+1]!=-1)return dp[i+1][j+1];
        if(i>=0 && j<0) return false;
        if(i<0 && j>=0){
            for(int k=0;k<=j;k++){
                if(p[k]!='*'){
                    return false;
                }
            }
            return true;
        }
        if(s[i]==p[j] || p[j]=='?'){
            return dp[i+1][j+1]=match(s,p,i-1,j-1,dp);
        }else if(p[j]=='*'){
            return dp[i+1][j+1]=match(s,p,i-1,j,dp)||match(s,p,i,j-1,dp);
        }else{
            return false;
        }


    }
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return match(s, p, n - 1, m - 1, dp); 

    }
};