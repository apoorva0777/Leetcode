class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        int i=0;
        
        while(i<s.size()){
            while(i<s.size()&& s[i]==' '){
                i++;
            }
            string word="";
            while(i<s.size()&&s[i]!=' '){
                word+=s[i];
                i++;
            }
            if(!word.empty()){
            st.push(word);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty())ans+=" ";
        }
        return ans;
    }
};