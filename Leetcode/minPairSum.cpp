class Solution {
public:
  int minPairSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int left = 0, right = size - 1;
    int curMax = -1;
    while (left <= right) {
      int pair = nums[left] + nums[right];
      curMax = max(curMax, pair);
      left++;
      right--;
    }

    return curMax;
  }
};
