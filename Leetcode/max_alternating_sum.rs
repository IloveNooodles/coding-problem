impl Solution {
    pub fn max_alternating_sum(nums: Vec<i32>) -> i64 {
        let mut mapped: Vec<i32> = nums.iter()
            .map(|x| x.abs())
            .collect();
        mapped.sort();
        mapped.reverse();
        let size = nums.len();
        let mut result: i64 = 0;
        let even = (size + 1) / 2;
        for i in 0..size {
            let mut cur = mapped[i] * mapped[i];
            if i > even - 1 {
                cur *= -1;
            }

            result += cur as i64;
        }
        result
    }
}
