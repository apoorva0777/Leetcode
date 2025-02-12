class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minb=INT_MAX;
        int maxs=0;
        for(int i=0;i<prices.size();i++){
             minb=min(minb,prices[i]);
             maxs=max(maxs,prices[i]-minb);
        }
        return maxs;
    }
};