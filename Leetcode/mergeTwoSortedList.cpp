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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return NULL;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode *ans = NULL;
        ListNode *ptr = NULL;
        int counter = 0;
        while(list1 != NULL && list2 != NULL){
            if(list1->val > list2->val){
                if(ans == NULL) {
                    ans = new ListNode(list2->val);
                    ptr = ans;
                    list2 = list2->next;
                    continue;
                }
                ptr->next = new ListNode(list2->val);
                list2 = list2->next;
            } else {
                if(ans == NULL) {
                    ans = new ListNode(list1->val);
                    ptr = ans;
                    list1 = list1->next;
                    continue;
                }
                ptr->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            ptr = ptr->next;
        }
        if(list1 != NULL) ptr->next = list1;
        if(list2 != NULL) ptr->next = list2;
        return ans;
    }
};
