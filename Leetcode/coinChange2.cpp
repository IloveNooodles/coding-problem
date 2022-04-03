#include <vector>
#include <iostream>

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int size = coins.size();
        // vector<vector<int>> dp(size, vector<int>(amount+1, 0));
        int dp[size][amount + 1];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < size; i++){
            dp[i][0] = 1;
        }
        for(int i = 0; i < size; i++){
            for(int j = 1; j <= amount; j++){
                if(j >= coins[i]) dp[i][j] += dp[i][j-coins[i]];
                if(i > 0) dp[i][j] += dp[i-1][j];
            }
        }
        
        return dp[size-1][amount];
    }
};