impl Solution {
    pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
       //[-4,-1,-1,0,1,2] 
       let mut v = nums;
       v.sort();
       let mut ans: Vec<Vec<i32>> = Vec::new();
        for i in 0..v.len() - 2 {
            // skips if the first value is the same
            if i > 0 && v[i] == v[i - 1] {
                continue;
            }

            let mut left = i + 1;
            let mut right = v.len()-1;
            while left < right {
                let sum = v[left] + v[i] + v[right];
                let x = vec![v[left], v[i], v[right]];
                if sum == 0 {
                    ans.push(x);

                    let cur_left = v[left];
                    let cur_right = v[right];

                    while left < right && v[left] == cur_left {
                        left += 1;
                    }

                    while left < right && v[right] == cur_right {
                        right -= 1;
                    }
                    
                } else if sum > 0 {
                    right -=1;
                } else {
                    left += 1;
                }
            }
       }

       return ans;
    }
}
