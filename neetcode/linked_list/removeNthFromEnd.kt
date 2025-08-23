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
    fun removeNthFromEnd(head: ListNode?, n: Int): ListNode? {
        var ptr = head;
        val dq = ArrayDeque<ListNode?>();
        while(ptr != null){
            dq.addFirst(ptr);
            ptr = ptr.next;
        }

        var ctr = n;
        while(!dq.isEmpty()){
            ctr--;
            if(ctr == 0){
                val removed = dq.removeFirst();
                //println(removed?.`val`)
                val prevPtr = dq.removeFirstOrNull();
                //println(prevPtr?.`val`)
                if(prevPtr != null){
                    prevPtr?.next = removed?.next;
                    return head;
                } else {
                    return head?.next;
                }
            }
            dq.removeFirst();
        }
        return null;
    }
}
