class Solution {
public:
    void solve(vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>&combination,int index){
        if(target==0){
            ans.push_back(combination);
            return;
        }
        if(index==candidates.size()||target<0){
            return;
        }

        combination.push_back(candidates[index]);
        solve(candidates,target-candidates[index],ans,combination,index);
        
        combination.pop_back();
        solve(candidates,target,ans,combination,index+1);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combination;
        int index=0;
        solve(candidates,target,ans,combination,0);
        return ans;
    }
};
