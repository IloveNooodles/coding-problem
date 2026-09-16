impl Solution {
    pub fn merge(mut intervals: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        let mut i = 0;
        let mut cur = 0;
        intervals.sort();

        while i < intervals.len() {
            if i == 0 {
                ans.push(intervals[i].clone());
                i += 1;
                continue;
            }

            let top = &intervals[i];
            if std::cmp::min(ans[cur][0], top[0]) <= std::cmp::max(ans[cur][1], top[1]) &&
                std::cmp::max(ans[cur][0], top[0]) <= std::cmp::min(ans[cur][1], top[1]) {
                    ans[cur] = vec![std::cmp::min(ans[cur][0], top[0]), std::cmp::max(ans[cur][1], top[1])];
                    i += 1;
                    continue;
            }

            ans.push(intervals[i].clone());
            cur += 1;
            i += 1;
        } 

        ans
    }
}
