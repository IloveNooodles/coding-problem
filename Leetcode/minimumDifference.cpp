class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        if(k == 1) return nums[0] - nums[0];
        int ans = INT_MAX;
        for(int i = 0; i <= nums.size() - k; i++){
            int num = nums[i]  - nums[i+k-1];
            ans = min(ans, num);
        }
        return ans;
    }
};

// [9,4,1,7, 10, 11, 15, 16]
// 16, 15, 11, 10, 9, 7, 4, 1
