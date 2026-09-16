impl Solution {
    pub fn first_stable_index(nums: Vec<i32>, k: i32) -> i32 {
        let size = nums.len();
        let mut preffix = vec![i32::MIN; size];
        let mut suffix = vec![i32::MAX; size];

        let mut i = 0;
        let mut j = size - 1;

        preffix[i] = nums[i];
        suffix[j] = nums[j];

        i += 1;
        j -= 1;
        while i < size && j >= 0 {
            preffix[i] = std::cmp::max(preffix[i-1], nums[i]);
            suffix[j] = std::cmp::min(suffix[j+1], nums[j]);
            i += 1;
            j -= 1;
        }

        let mut smallest_stable_index = usize::MAX;
        for i in 0..size {
            let diff = preffix[i] - suffix[i];
            let cur = if smallest_stable_index == usize::MAX { i32::MAX } else { preffix[smallest_stable_index] - suffix[smallest_stable_index] };
            if diff <= k && diff <= cur {
                smallest_stable_index = std::cmp::min(i,smallest_stable_index);
            }
        }

        if smallest_stable_index == usize::MAX {
            return -1;
        } else {
            smallest_stable_index as i32
        }
    }
}
