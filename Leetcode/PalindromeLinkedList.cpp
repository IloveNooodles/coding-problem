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

    bool palindromeHelper(vector<int> arr, int start, int end){
        while(start < end){
            if(arr[start++] != arr[end--]) return false;    
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* t = head;

        while(t != NULL){
            arr.push_back(t->val);
            t = t->next;
        }

        return palindromeHelper(arr, 0, arr.size() -1);
    }
};
