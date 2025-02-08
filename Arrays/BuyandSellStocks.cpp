class Solution {
public:
    
    int maxProfit(vector<int>& prices) {

        int maxprofit=0;
        int profit=0;
        int cost=INT_MAX;

        for(int i=0;i<prices.size();i++){

            cost=min(cost,prices[i]);
            profit=prices[i]-cost;
            maxprofit=max(profit,maxprofit);
            
        }

        return maxprofit;
    }
};
