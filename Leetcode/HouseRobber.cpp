class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp(size+1, 0);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i = 1; i < size; i++){
            dp[i + 1] = max(dp[i - 1] + nums[i], dp[i]);
        }
        return dp[size];
    }
};
