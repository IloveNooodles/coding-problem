impl Solution {
    pub fn find_min(nums: Vec<i32>) -> i32 {
        let mut left = 0;
        let mut right = nums.len() - 1;
        let mut res = nums[left];
        while left <= right {
            if nums[left] < nums[right] {
                res = std::cmp::min(res, nums[left]);
                return res;
            }

            let mid = left + (right - left) / 2;
            res = std::cmp::min(res, nums[mid]);
            if nums[mid] >= nums[left] {
                left = mid + 1;
                continue;
            }
            right = mid - 1;
        }

        res
    }
}
