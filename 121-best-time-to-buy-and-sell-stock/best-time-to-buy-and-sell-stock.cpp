class Solution {
public:
    void maxcalculate(vector<int>& prices,int i,int &maxprofit,int &minprice){
        //base
        if(i==prices.size()){
            return;
        }

        //one case solve
        if(prices[i]<minprice){
            minprice=prices[i];
        }
        int todaysprofit=prices[i]-minprice;
        if(todaysprofit>maxprofit){
            maxprofit=todaysprofit;
        }

        //rest recursion will do
        maxcalculate(prices,i+1,maxprofit,minprice);
    }
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN;
        int minprice=INT_MAX;
        maxcalculate(prices,0,maxprofit,minprice);
        return maxprofit;
    }
};