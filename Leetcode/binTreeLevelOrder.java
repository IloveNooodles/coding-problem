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
  List<List<Integer>> now = new ArrayList<List<Integer>>();
  Queue<TreeNode> q = new LinkedList<TreeNode>();

  public List<List<Integer>> levelOrder(TreeNode root) {
    if (root == null) {
      return now;
    }
    q.offer(root);
    while (!q.isEmpty()) {
      List<Integer> l = new ArrayList<>();
      int size = q.size();
      for (int i = 0; i < size; i++) {
        TreeNode t = q.poll();
        if (t.left != null)
          q.offer(t.left);
        if (t.right != null)
          q.offer(t.right);
        l.add(t.val);
      }
      now.add(l);
    }
    return now;
  }
}