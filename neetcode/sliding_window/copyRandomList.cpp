/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        unordered_map<Node*, Node*> m;
        while(cur != nullptr){
            int val = cur->val;
            Node* copy = new Node(val);
            m[cur] = copy;
            cur = cur->next;
        }

        cur = head;
        while(cur != nullptr){
            Node* copy = m[cur];
            copy->next = m[cur->next];
            copy->random = m[cur->random];
            cur = cur->next;
        }

        return m[head];
    }
};
