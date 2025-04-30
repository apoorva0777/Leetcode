class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i:nums){
            int cnt=0;
            while(i>0){
                i=i/10;
                cnt++;
            }
            if(cnt%2==0)even++;
        }
        return even;
    }
};