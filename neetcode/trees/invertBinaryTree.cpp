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
    TreeNode* invertTree(TreeNode* root) {
        return recrusiveInvertTree(root);
    }

    TreeNode* recrusiveInvertTree(TreeNode *root){
        if(root == NULL) return root;
        TreeNode *temp = recrusiveInvertTree(root->left);
        TreeNode *right = recrusiveInvertTree(root->right);
        root->left = right;
        root->right = temp;
        return root;
    }
};
