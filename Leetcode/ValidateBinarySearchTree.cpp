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
    bool isValidBST(TreeNode* root) {
       //do iterative inorder
        if(root == NULL) return false;
        stack<TreeNode*> listTree;
        TreeNode* prev = NULL;
        while(root != NULL || !listTree.empty()) {
            //cek kiri dl
            while(root != NULL) {
                listTree.push(root);
                root = root->left;
            }
            
            //pop satu2
            root = listTree.top();
            listTree.pop();
            if(prev != NULL && root->val <= prev->val) return false;
            prev = root;
            root = root->right;
        }
        return true;
    }
};
