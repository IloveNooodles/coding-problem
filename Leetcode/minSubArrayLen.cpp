class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long size = nums.size();
        long long left = 0, right = left;
        long long result = 1e9;
        long long curSum = 0;
        long long i = 0;
        while(right < size && left < size){
            curSum += nums[right];
            if(curSum >= target){
                result = min(right - left + 1, result);
            }

            if(curSum > target){
                curSum -= nums[left];
                curSum -= nums[right];
                left++;
                continue;
            }

            right++;
        }

        if(result == 1e9) return 0;
        return result;
    }
};
