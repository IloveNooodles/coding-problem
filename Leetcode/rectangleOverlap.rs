impl Solution {
    pub fn is_rectangle_overlap(rec1: Vec<i32>, rec2: Vec<i32>) -> bool {
        let x11 = rec1[0];
        let y11 = rec1[1];
        let x12 = rec1[2];
        let y12 = rec1[3];

        let x21 = rec2[0];
        let y21 = rec2[1];
        let x22 = rec2[2];
        let y22 = rec2[3];;

        let horizontal = x11 < x22 && x12 > x21;
        let vertical = y11 < y22 && y12 > y21;

        horizontal && vertical
    }
}
