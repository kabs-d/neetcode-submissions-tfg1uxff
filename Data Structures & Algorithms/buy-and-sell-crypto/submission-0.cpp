class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int buy_index=0; int profit=0;
     for(int sell_index=1; sell_index<prices.size(); sell_index++){
           int diff= prices[sell_index] - prices[buy_index];
           if(diff<=0) buy_index=sell_index;
            else profit=max(profit, diff);
     }
     return profit;
     
    }
};