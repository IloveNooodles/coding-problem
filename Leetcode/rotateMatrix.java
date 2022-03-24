class Solution {
    public void rotate(int[] nums, int k) {
        int size = nums.length;
        k %= size;
        size--;
        rev(nums, 0, size);
        rev(nums, 0, k - 1);
        rev(nums, k, size);
    }
    
    public void rev(int[] nums, int start, int end) {
        while(start < end) {
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;
            start++;
            end--;
        }
    }
}
