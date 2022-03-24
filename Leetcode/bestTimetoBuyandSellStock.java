class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int minProfit = 99999;
        int size = prices.length;
        for (int i = 0; i < size; i++) {
            if(prices[i] < minProfit) {
                minProfit = prices[i];
            }
            
            int tempProfit = prices[i] - minProfit;
            if (tempProfit > maxProfit) {
                maxProfit = tempProfit;
            }
        }
        return maxProfit;
    }
}
