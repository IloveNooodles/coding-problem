class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();
        int len = nums.length;
        for (int i = 0; i < len; i++) {
            if (m.containsKey(nums[i])){
                return true;
            }
            m.put(nums[i], 1);
        }
        return false;
    }
}
