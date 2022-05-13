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
  public TreeNode insertIntoBST(TreeNode root, int val) {

    // base case
    if (root != null) {
      if (val > root.val && root.right != null)
        insertIntoBST(root.right, val);
      else if (val < root.val && root.left != null)
        insertIntoBST(root.left, val);
    } else {
      // if 0 node then auto insert
      return new TreeNode(val);
    }

    // insert value
    TreeNode toInsert = new TreeNode(val);
    if (val > root.val && root.right == null)
      root.right = toInsert;
    else if (val < root.val && root.left == null)
      root.left = toInsert;

    return root;

  }
}