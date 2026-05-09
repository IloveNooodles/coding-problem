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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q; q.push(root);
        int limit = 1;
        int cnt = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> a;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                if(node != nullptr){
                    a.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
                q.pop();
            }
            if(a.size() > 0) v.push_back(a);
        }

        return v;
    }
};
