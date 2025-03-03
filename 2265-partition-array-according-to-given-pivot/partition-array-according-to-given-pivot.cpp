class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans;
        vector<int> v1, v2, v3;
        for(int i=0;i<n; i++){
            if(nums[i] < pivot){
              v1.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                v2.push_back(nums[i]);
            }
            else{
                v3.push_back(nums[i]);
            }
        }
        ans.insert(ans.end(),v1.begin(),v1.end());
        
        ans.insert(ans.end(),v2.begin(),v2.end());
        
        ans.insert(ans.end(),v3.begin(),v3.end());
return ans;
        
    }
};