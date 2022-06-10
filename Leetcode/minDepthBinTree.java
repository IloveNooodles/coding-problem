/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int minDepth(TreeNode root) {
        if(root == null) return 0;
        Queue<TreeNode> BFS = new LinkedList<TreeNode>();
        int treeCount = 0;
        BFS.add(root);
        while (!BFS.isEmpty()) {
            //iterate through all of the nodes
            treeCount++;
            int totalNodes = BFS.size();
            for (int i = 0; i < totalNodes; i++) {
                //base case
                TreeNode currentNode = BFS.remove();
                if(currentNode.left == null && currentNode.right == null) return treeCount;
                if(currentNode.left != null) BFS.add(currentNode.left);
                if(currentNode.right != null) BFS.add(currentNode.right);
            }
        }
        return treeCount;
    }
}
