class Solution {
    public void moveZeroes(int[] nums) {
        int size = nums.length;
        int cnt = 0;
        for(int i = 0; i < size; i++) {
            if(nums[i] != 0) {
                nums[cnt++] = nums[i];
            }
        }
        for(int i = cnt; i < size; i++){
            nums[cnt++] = 0;
        }
    }
}
