class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        while(true){
            unordered_set<int> seen(nums.begin(),nums.end());
            if(seen.size()==nums.size())break;
            nums.erase(nums.begin(),nums.begin()+min(3,(int)nums.size()));
            op++;
        }
        return op;
    }
};