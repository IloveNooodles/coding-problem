class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> m = new HashMap<>();
        int size = nums.length;
        int[] res = new int[2];
        for(int i = 0; i < size; i++){
            int temp = target - nums[i];
            System.out.println(temp);
            if (m.containsKey(temp)) {
                res[1] = i;
                res[0] = m.get(temp);
                break;
            }
            m.put(nums[i], i);
        }
        return res;
    }
}
