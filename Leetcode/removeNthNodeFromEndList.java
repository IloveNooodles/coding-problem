/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count = 0;
        ListNode ptr = head;
        while(ptr != null) {
            count++;
            ptr = ptr.next;
        }
        if (count == 1) {
            return null;
        } 
        int target = count - n;
        count = 0;
        ptr = head;
        if(count == target) {
            ptr = ptr.next;
            return ptr;
        }
        
        while (count < target - 1) {
            ptr = ptr.next;
            count++;
        }
        
        ptr.next = ptr.next.next;
        return head;
    }
}
