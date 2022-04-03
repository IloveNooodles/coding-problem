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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *firstPtr = head;
        ListNode *secondPtr = head;
        while(firstPtr != NULL && secondPtr != NULL){
            firstPtr = firstPtr->next;
            if(secondPtr->next != NULL && secondPtr->next->next != NULL){
                secondPtr = secondPtr->next->next;
            }else{
                secondPtr = NULL;
            }
            
            if(firstPtr == secondPtr){
                return true;
            }
        }
        return false;
    }
};