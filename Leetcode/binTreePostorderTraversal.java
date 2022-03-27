 /**
        * Definition for a binary tree node.
        * public class TreeNode {
        * int val;
        * TreeNode left;
        * TreeNode right;
        * TreeNode() {}
        * TreeNode(int val) { this.val = val; }
        * TreeNode(int val, TreeNode left, TreeNode right) {
        * this.val = val;
        * this.left = left;
        * this.right = right;
        * }
        * }
        */
class Solution {
  List<Integer> now = new ArrayList<>();

  public List<Integer> postorderTraversal(TreeNode root) {
    if (root == null) {
      return now;
    }
    postorderTraversal(root.left);
    postorderTraversal(root.right);
    now.add(root.val);
    return now;
  }
}

class binTreePostorderTraversal {

}
