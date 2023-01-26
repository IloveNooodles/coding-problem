/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* travA = headA; ListNode* travB = headB;
        
        while(travA != travB) {
            travA = travA == NULL ? headB : travA->next;
            travB = travB == NULL ? headA : travB->next;            
        }
        return travA;
    }
};
