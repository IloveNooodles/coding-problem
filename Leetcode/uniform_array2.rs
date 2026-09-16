impl Solution {
    pub fn uniform_array(nums1: Vec<i32>) -> bool {
        // genap == ganjil
        // 1,1,2,2
        // genap > ganjil
        // 2,2,2,5
        // 3,2,2,2
        // 2,3,2,2
        // 2,2,3,2
        // ganjil > genap
        // 1,1,1,2
        // 1,1,1,6,2


        let mut minimum_even = i32::MAX;
        let mut minimum_odd = i32::MAX;
        for i in 0..nums1.len() {
            if nums1[i] % 2 == 0 {
                minimum_even = std::cmp::min(minimum_even, nums1[i]);
            } else {
                minimum_odd = std::cmp::min(minimum_odd, nums1[i]);
            }
        }

        if minimum_even == i32::MAX || minimum_odd == i32::MAX {
            return true;
        }

        if minimum_even - minimum_odd >= 1 {
            return true;
        }

        false
    }
}
