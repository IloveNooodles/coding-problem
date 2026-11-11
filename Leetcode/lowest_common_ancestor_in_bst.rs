// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn lowest_common_ancestor(root: Option<Rc<RefCell<TreeNode>>>, p: Option<Rc<RefCell<TreeNode>>>, q: Option<Rc<RefCell<TreeNode>>>) -> Option<Rc<RefCell<TreeNode>>> {
        let root_val = root.as_ref()?.borrow().val;
        let p_val = p.as_ref()?.borrow().val;
        let q_val = q.as_ref()?.borrow().val;
        
        if root_val > p_val && root_val > q_val {
            let left = root.as_ref()?.borrow().left.clone();
            return Self::lowest_common_ancestor(left, p, q);
        }

        if root_val < p_val && root_val < q_val {
            let right = root.as_ref()?.borrow().right.clone();
            return Self::lowest_common_ancestor(right, p, q);
        }

        return root;
    }
}
