class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        
        //calculate sum
        for(int num: nums) sum += num;
        
        int maxLen = -1; int range = 0; int size = nums.size(); int curSum = 0;
        
        //use sliding window for calculating largest subarray that eq sum - x;
        for(int left = 0, right = 0; right < size; right++) {
            curSum += nums[right];
            while(left <= right && curSum > sum - x) curSum -= nums[left++];
            if(curSum == sum - x) maxLen = max(maxLen, right - left + 1);
        }
        return maxLen == -1 ? -1 : size - maxLen;
    }
};
