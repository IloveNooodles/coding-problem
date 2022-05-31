/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(root == NULL) return res;
        
        stack<Node*> stackTree;
        stackTree.push(root);
        while (!stackTree.empty()) {
            Node* cur = stackTree.top();
            stackTree.pop();
            res.push_back(cur->val);
            //add from right to left
            for(int i = cur->children.size() - 1; i >= 0; i--) {
                if(cur->children[i]) stackTree.push(cur->children[i]);
            }
        }
        return res;
    }
};
