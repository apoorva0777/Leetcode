class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        generate(n,0,0,"",s);
        return s;
    }
    void generate(int n,int open,int close,string present,vector<string>&s) {
        if(open==n&&open==close){
            s.push_back(present);
            return;
        }
        if(open<n){
            generate(n,open+1,close,present + "(",s);
        }
        if(close<open){
            generate(n,open,close+1,present + ")",s);
        }
        
    }
};




// class Solution {
// public:
//     vector<string> generateParenthesis(int n) {
//         vector<string> result;
//         generateParenthesisHelper(n, 0, 0, "", result);
//         return result;
//     }

// private:
//     void generateParenthesisHelper(int n, int open, int close, string current, vector<string>& result) {
//         if (open == n && close == n) {
//             result.push_back(current);
//             return;
//         }
//         if (open < n) {
//             generateParenthesisHelper(n, open + 1, close, current + "(", result);
//         }
//         if (close < open) {
//             generateParenthesisHelper(n, open, close + 1, current + ")", result);
//         }
//     }
// };
