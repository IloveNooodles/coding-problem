/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        maxDepth(diameter, root);
        return diameter;
    }

    int maxDepth(int &diameter, TreeNode *root){
        if(root == NULL) return 0;
        int left = maxDepth(diameter, root->left);
        int right = maxDepth(diameter, root->right);
        diameter = max(diameter, left + right);
        int maxDepth = max(left, right) + 1;
        return maxDepth;
    }
};
