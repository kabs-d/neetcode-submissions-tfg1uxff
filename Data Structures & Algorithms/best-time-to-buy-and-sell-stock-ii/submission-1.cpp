class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int n=1; n<prices.size(); n++){
            if(prices[n]>prices[n-1]) profit = profit+ prices[n] - prices[n-1];
        }
        return profit;
    }
};