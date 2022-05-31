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
    int getDecimalValue(ListNode* head) {
        stack<int> binRep;
        ListNode* trav = head;
        while(trav != NULL) {
            binRep.push(trav->val);
            trav = trav->next;
        }
        
        int sum = 0;
        int bin = 1;
        while(!binRep.empty()) {
            sum += bin * binRep.top();
            binRep.pop();
            bin <<= 1;
        }
        return sum;
    }
};

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
    int getDecimalValue(ListNode* head) {
        ListNode* trav = head;
        int sum = 0;
        while(trav != NULL) {
            sum <<= 1;
            sum += trav->val;
            trav = trav->next;
        }
        return sum;
    }
};

    
