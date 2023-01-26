class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int curSum = 0;
        int maxSum = 0;
        int size = nums.size();
        unordered_set<int> erasureValue;
        for (int left = 0, right = 0; right < size; right++) {
            while(erasureValue.find(nums[right]) != erasureValue.end()) {
                erasureValue.erase(nums[left]);
                curSum -= nums[left++];
            }
            curSum += nums[right];
            erasureValue.insert(nums[right]);
            maxSum = max(maxSum, curSum);
            
        }
        return maxSum;
    }
};
