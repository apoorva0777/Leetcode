class Solution {
public:
    // to check if m is possible or not 
    bool pos(int m,vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int>ds(n+1,0);
        for(int i=0;i<=m;i++){
            auto q = queries[i];
            int l = q[0];
            int r = q[1];
            int v = q[2];

            ds[l] += v;
            ds[r+1] -= v;
        }
        // calculate the prefix sums 
        for(int i=1;i<n;i++)ds[i] += ds[i-1];
        for(int i=0;i<n;i++){
            // check if the amount of decrements is enough 
            if(ds[i]<nums[i])return false;
        }return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        bool check = false;
        for(int num:nums)check |= num>0;
        if(!check)return 0;
        int n = nums.size();
        int q = queries.size();
        int l = 0;
        int r = q - 1;
        int res = q;
        // binary search 
        while(l<=r){
            int m = (l+r)/2;
            if(pos(m,nums,queries)){
                res = m;
                r = m - 1;
            }else l = m + 1;
        }
        return ((res==q)?-1:res+1);
    }
};
