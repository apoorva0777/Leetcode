class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char start='a';
        int index=0;

        while(start<='z'&&index<key.size()){
            char curr=key[index];
            if(curr!=' '&&mp.find(curr)==mp.end()){
                mp[curr]=start;
                start++;
                index++;
            }else{
                index++;
            }
        }
        string ans="";
        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                ans+=' ';
            }else{
                ans+=mp[message[i]];
            }
        }
        return ans;
    }
};