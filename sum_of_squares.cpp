impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let n = nums.len();

        nums.iter()
            .enumerate()
            .filter_map(|(i, x)| (n % (i + 1) == 0).then_some(x * x))
            .sum()
    }
}
