class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int currentSum = 0;
        for (int i = 0; i < size; i++) {
            currentSum += nums[i];
            ans.push_back(currentSum);
        }
        return ans;
    }
};
