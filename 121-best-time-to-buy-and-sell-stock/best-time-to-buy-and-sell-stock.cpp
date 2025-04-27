class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            buy=min(prices[i],buy);
            prof=max(prof,prices[i]-buy);
        }
        return prof;
    }
};