class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int total=0;
        int maxe=neededTime[0];
        for(int i=1;i<neededTime.size();i++){
            if(colors[i]==colors[i-1]){
                total+=min(maxe,neededTime[i]);
                maxe=max(maxe,neededTime[i]);
            }else{
                maxe=neededTime[i];
            }
        }
        return total;
    }
};