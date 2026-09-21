impl Solution {
    pub fn check_overlap(radius: i32, x_center: i32, y_center: i32, x1: i32, y1: i32, x2: i32, y2: i32) -> bool {
        let mut cx = x_center.clamp(x1, x2);
        let mut cy = y_center.clamp(y1, y2);

        let dx = x_center-cx;
        let dy = y_center-cy;

        if dx*dx+dy*dy-radius*radius<=0 {
            return true;
        }

        false
    }
}
