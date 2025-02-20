class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>indextracker;
        int start=0;
        int maxsize=1;
        if(s.size()==0){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            if(indextracker[s[i]]>0 && indextracker[s[i]] > start ){
                start=indextracker[s[i]];
            }
            indextracker[s[i]]=i+1;
            int currsize=i-start+1;
            maxsize=max(currsize,maxsize);
        }
        return maxsize;
    }
};
