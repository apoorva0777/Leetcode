class Solution {
public:
    bool isalphanumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        while (st < end) {
            while (st < end && !isalphanumeric(s[st])) {
                st++;
            }
            while (st < end && !isalphanumeric(s[end])) {
                end--;
            }
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
