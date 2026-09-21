impl Solution {
    pub fn result_array(nums: Vec<i32>) -> Vec<i32> {
        let size = nums.len() - 1;
        let mut arr1 = vec![];
        let mut arr2 = vec![];

        for (i, num) in nums.into_iter().enumerate() {
            if i == 0 {
                arr1.push(num);
                // println!("arr1: {:?}", num);
            } else if i == 1 {
                arr2.push(num);
                // println!("arr2: {:?}", num);
            } else {
                if arr1[arr1.len() - 1] > arr2[arr2.len() - 1] {
                    arr1.push(num);
                } else {
                    arr2.push(num);
                }
            }
        }

        arr1.extend(&arr2);
        arr1
    }
}
