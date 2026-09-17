impl Solution {
    pub fn missing_multiple(nums: Vec<i32>, k: i32) -> i32 {
        let mut freq = vec![0; 205];
        for i in 0..nums.len() {
            freq[nums[i] as usize] += 1;
        }

        for i in 1..200 {
            let num = k * i;
            if num > 200 {
                break;
            }

            if freq[num as usize] == 0 {
                return num;
            }
        }

        -1
    }
}
