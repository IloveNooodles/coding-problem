class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for(int i = 1; i < size - 1; i++){
            int first = nums[i-1], second = nums[i], third = nums[i+1];
            if(2 * (first + third) == second) count++;
        }
        return count;
    }
};
