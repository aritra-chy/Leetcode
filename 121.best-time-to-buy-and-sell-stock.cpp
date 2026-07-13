/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0;

        for(int i=1; i<prices.size(); i++) {
            if(buy_price > prices[i]) {
                buy_price = prices[i];
            } else {
                profit = max(profit, prices[i] - buy_price);
            }
        }
        return profit;
    }
};
// @lc code=end

