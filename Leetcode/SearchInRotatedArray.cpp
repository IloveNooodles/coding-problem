class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0, right = size - 1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target) return mid;
            if(nums[left] <= nums[mid]){
                if(target > nums[mid] || nums[left] > target) {
                    left = mid + 1;
                }
                else right = mid - 1;
            } else {
                if(target < nums[mid] || nums[right] < target){
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return -1;
    }
};
// [4,5,6,7,0,1,2] target = 0
// [0,1,2] target = 0
// [0,1,2,3,9] target = 3
// [3,9,0,1,2] target = 3
