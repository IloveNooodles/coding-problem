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
    bool findTarget(TreeNode* root, int k) {
        //traverse tree traversaly then do it manually like twosum
        vector<int> listVal;
        stack<TreeNode*> listTree;
        if(root == NULL) return false;
        while(root != NULL || !listTree.empty()){
            while(root != NULL) {
                listTree.push(root);
                root = root-> left;
            }
            
            //pop
            root = listTree.top();
            listTree.pop();
            listVal.push_back(root->val);
            root = root->right;
        }
        
        //array udah ada tinggal coba traverse manual aja
        int size = listVal.size();
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(i != j && listVal[i] + listVal[j] == k) return true;
            }
        }
        
        //coba pake map
        // map<int, int> m;
        // for(int i = 0; i < size; i++) {
        //     //blom ad
        //     if(m.find(listVal[i]) != m.end()) {
        //         m[listVal[i]] = i;
        //     } else {
        //         long toSearch = listVal[i] - m[listVal[i]];
        //         if(m.find(toSearch) == m.end()){
        //             return true;
        //         }
        //     }
        // }
        
        return false;
    }
};
