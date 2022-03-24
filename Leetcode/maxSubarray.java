class Solution {
    public int maxSubArray(int[] nums) {
        int max = Integer.MIN_VALUE;
        int sum = 0;
        int nums_len = nums.length;
        for(int idx = 0; idx < nums_len; idx++){
            sum += nums[idx];
            max = Math.max(sum, max);
            if(sum < 0) sum = 0;
        }
        return max;
    }
}
