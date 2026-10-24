class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(int i = 0; i<n; i++){
            int diff = prices[i] - buy;
            if(diff>0){ //profit
                profit = max(profit,diff);
            }
            buy = min(buy,prices[i]);
        }
        return profit;
    }
};
