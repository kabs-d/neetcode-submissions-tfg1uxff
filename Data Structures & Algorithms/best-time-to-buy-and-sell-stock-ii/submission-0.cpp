class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
       int buy_count =0;
       for(int n=0; n<prices.size()-1; n++){
            if(prices[n]<prices[n+1] && !(buy_count)) {
                profit=profit - prices[n];
                buy_count=1;
            }
            if(prices[n]>=prices[n+1] && (buy_count)){
                profit=profit+ prices[n];
                buy_count=0;
            }
            
       }
       if(buy_count) profit=profit+prices[prices.size()-1];
        return profit;
    }
};