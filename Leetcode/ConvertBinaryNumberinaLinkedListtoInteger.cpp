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
        vector<int> p;
        while(head != NULL){
            p.push_back(head->val);
            head = head->next;
        }

        int ans = 0, mlt = 1;
        int size = p.size();
        for(int i = size - 1; i >= 0; i--){
            ans += (p[i] * mlt);
            mlt *= 2;
        }
        
        return ans;
    }
};
