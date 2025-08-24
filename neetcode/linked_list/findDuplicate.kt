class Solution {
    fun findDuplicate(nums: IntArray): Int {
        var slow = nums[0];
        var fast = nums[0];
        var cnt = 0;
        // Find intersection point
        while(cnt < nums.size * 2){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast) break;
            cnt++;
        }


        // distance between beginning to the cycle
        // always the save between the intersection point
        // to the cycle
        var slow2 = nums[0];
        while(slow2 != slow){
            slow2 = nums[slow2];
            slow = nums[slow];
            if(slow == slow2) return slow;
        }

        return nums[0];
    }
}
