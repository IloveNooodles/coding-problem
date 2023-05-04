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
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return checkBalance(root, height);
    }

    int checkBalance(TreeNode* root, int& height){
        if(root == NULL) {
            return true;
        }

        int left = 0, right = 0;

        //check left and right are valid height balanced tree
        bool isLeftBalance = checkBalance(root->left, left);
        bool isRightBalance = checkBalance(root->right, right);
        if (!isLeftBalance || !isRightBalance){
            return false;
        }
        
        // check if the diff height is no bigger than one
        if(abs(left - right) > 1){
            return false;
        }

        height = 1 + max(left, right);
        return true;
    }
};
