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
    bool isValid = true;
    void dfs(TreeNode* root, long long minimum, long long maximum){
        if(root == nullptr || !isValid) return;
        int val = root->val;

        if(val <= minimum || val >= maximum) {
            isValid = false;
            return;
        }

        dfs(root->left, minimum, val);
        dfs(root->right, val, maximum);
        return;
    }
    bool isValidBST(TreeNode* root) {
        dfs(root->left, LLONG_MIN, root->val);
        dfs(root->right, root->val, LLONG_MAX);
        return isValid;
    }
};
