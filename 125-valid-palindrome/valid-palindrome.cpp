class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char c:s){
            if(isalnum(c)){
                clean+=tolower(c);
            }
        }
        int n = clean.size();
        return check(clean, 0, n);
    }

    bool check(string &s, int i, int n) {
        if (i >= n / 2) return true;
        if (tolower(s[i]) != tolower(s[n - i - 1])) return false;
        return check(s, i + 1, n);
    }
};
