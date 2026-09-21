impl Solution {
    pub fn reverse_degree(s: String) -> i32 {
       let mut result: i32 = 0; 

       for (i, ch) in s.chars().enumerate() {
            let idx = 26 - (ch as i32 - 'a' as i32);
            result += (i as i32 + 1) * idx;
       }

       result
    }
}
