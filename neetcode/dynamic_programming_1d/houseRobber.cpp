class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();

        if(size == 1){
            return nums[0];
        }

        vector<int> dp(size + 1, 0);

        dp[0] = nums[0];
        dp[1] = max(nums[1], dp[0]);

        for(int i = 2; i < size; i++){
           //rob current house and the i - 2 or don't rob in this but get the i - 1
           dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        }

        return max(dp[size - 1], dp[size - 2]);
    }
};
