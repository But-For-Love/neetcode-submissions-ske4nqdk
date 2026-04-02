class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell= prices[0],profit = 0;
        for(auto& p:prices){
            if(p>buy){
                profit = max(profit, p-buy);
            }else{
                buy = p;
            }
        }
        return profit;
    }
};
