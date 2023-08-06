class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int size = 1e4+2;
        vector<int> dp(size, 0);

        for(auto &x : nums){
            dp[x] +=x;
        }

        for(int i = 2; i < size; i++){
            dp[i] = max(dp[i-2] + dp[i], dp[i-1]);
        }

        return dp[size - 1];
    }
};
