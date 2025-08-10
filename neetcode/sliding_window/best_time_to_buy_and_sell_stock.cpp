class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maxIdx = 0;
        int maxProfit = 0;
        int left = 0, right = 0;
        while(left < size && right < size){
            if(prices[right] < prices[left]) {
                left = right;
                maxIdx = left;
            }
            if(prices[right] >= prices[maxIdx]) maxIdx = right;
            right++;
            int curProfit = prices[maxIdx] - prices[left];
            maxProfit = max(maxProfit, curProfit);
        }

        return maxProfit;
    }
};
