class Solution {
    public int search(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        return binarySearch(nums, start, end, target);
    }
    public int binarySearch(int[] nums, int start, int end, int target) {
        if(start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] == target) {
                return mid;
            } else {
            
                if(nums[mid] > target) {
                    return binarySearch(nums, start, mid-1, target);
                } 
                
                return binarySearch(nums, mid+1, end, target);
            }
        }
        return -1;
    }
}
