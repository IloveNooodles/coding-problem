impl Solution {
    pub fn total_numbers(digits: Vec<i32>) -> i32 {
        let size = digits.len();
        let mut freq = vec![0; 10];
        for i in 0..size {
            freq[digits[i] as usize] += 1;
        }

        let mut ans = 0;

        for i in 1..=9 {
            if freq[i] == 0 {
                continue;
            }

            freq[i] -= 1;

            for j in 0..=9 {
                if freq[j] == 0 {
                    continue;
                }

                freq[j] -= 1;
                for k in (0..=9).step_by(2) {
                    if freq[k] > 0 {
                        ans += 1;
                    }
                }

                freq[j] += 1;
            }

            freq[i] += 1;
        }

        ans
    }
}
