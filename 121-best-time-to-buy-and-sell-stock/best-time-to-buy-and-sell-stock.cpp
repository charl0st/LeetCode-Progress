class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0, current_profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(buy_price > prices[i]) {
                buy_price = prices[i];
            } else {
                current_profit = prices[i] - buy_price;
                if(current_profit > profit)
                    profit = current_profit;
            }
        }

        return profit;   
    }
};
