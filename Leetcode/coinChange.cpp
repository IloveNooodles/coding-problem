#include <vector>

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int size = coins.size();
        vector<int> dp(amount + 1, 99999);
        dp[0] = 0;
        for(int i = 0; i <= amount; i++) {
            for (int j = 0; j < size; j++) {
                if (i >= coins[j]) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        int best = dp[amount] == 99999 ? -1 : dp[amount];
        return best;
    }
};