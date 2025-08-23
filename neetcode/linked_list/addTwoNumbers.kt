/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun addTwoNumbers(l1: ListNode?, l2: ListNode?): ListNode? {
        var ptr1 = l1;
        var ptr2 = l2;
        val ans = mutableListOf<Int>();
        var carry = 0;
        var shouldAdd = false;
        while(ptr1 != null && ptr2 != null) {
            val sum = ptr1.`val` + ptr2.`val` + carry;
            carry = max(0, sum/10);
            //print("sum: $sum, carry: $carry\n")
            shouldAdd = if(sum >= 10) true else false;
            ans.add(sum % 10);
            ptr1 = ptr1.next;
            ptr2 = ptr2.next;
        }

        while(ptr1 != null){
            val sum = ptr1.`val` + carry;
            carry = max(0, sum/10);
            //print("ptr1: sum: $sum, carry: $carry\n");
            shouldAdd = if(sum >= 10) true else false;
            ans.add(sum % 10);
            ptr1 = ptr1.next;
        }

        while(ptr2 != null){
            val sum = ptr2.`val` + carry;
            carry = max(0, sum/10);
            //print("ptr2: sum: $sum, carry: $carry\n");
            shouldAdd = if(sum >= 10) true else false;
            ans.add(sum % 10);
            ptr2 = ptr2.next;
        }

        if(shouldAdd) ans.add(carry);
        var head: ListNode? = null;
        var ptr: ListNode? = head;
        for(item in ans){
            if(head == null){
                head = ListNode(item);
                ptr = head;
            } else {
                ptr?.next = ListNode(item);
                ptr = ptr?.next;
            }
        }

        return head;
    }
}
