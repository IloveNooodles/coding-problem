class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int left = 0; int right = 1; int size = prices.size();
        while (left < size && right < size){
            if(prices[right] < prices[left]){
                left = right;
                right = left + 1;
                continue;
            }
            maxProfit = max(prices[right] - prices[left], maxProfit);
            right++;
        }
        return max(maxProfit, 0);
    }
};
