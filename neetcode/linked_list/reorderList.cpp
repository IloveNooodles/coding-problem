/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        int size = 0;
        stack<ListNode*> s;
        ListNode* cur = head;
        while(cur != nullptr){
            size++;
            s.push(cur);
            cur = cur->next;
        }

        ListNode* ptr = head;
        ListNode* next = nullptr;
        int iteration = size/2;
        while(iteration > 0){
            ListNode* top = s.top();
            s.pop();

            next = ptr->next;
            //cout << "CUR: " << ptr->val << " NEXT: " << next->val << " TOP: " << top->val << endl;
            top->next = next;
            ptr->next = top;
            ptr = next;

            iteration--;
        }

        ptr->next = nullptr;
    }
};
