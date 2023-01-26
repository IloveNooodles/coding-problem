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
    const int NO_CAMERA = 0;
    const int NO_NEED_CAMERA = 1;
    const int HAS_CAMERA = 2;
    
    int ans = 0;
    int minCameraCover(TreeNode* root) {
        if(dfs(root) == NO_CAMERA) ans++;
        return ans;
    }
    
    int dfs(TreeNode* root) {
    /* if root is null then no need camera*/
        if(!root) return NO_NEED_CAMERA;
        int left = dfs(root->left);
        int right = dfs(root->right);
        /* if left and right doesn't have camera then install camera on the parent */
        if(left == NO_CAMERA || right == NO_CAMERA) {
            ans++;
            return HAS_CAMERA;
        }
        
        /* if left and right has camera then no need to install */
        if(left == HAS_CAMERA || right == HAS_CAMERA) {
            return NO_NEED_CAMERA;
        }
        
        return NO_CAMERA;
    }
};
