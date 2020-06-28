class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        // Create a dummy node to have something to build on.
        ListNode dummy = new ListNode(-1);
        ListNode head = dummy;
        while(l1 != null && l2 != null){
            if(l1.val < l2.val){
                // Add to dummy
                dummy.next = l1;
                // Move to next node
                l1 = l1.next;
            } else {
                dummy.next = l2;
                l2 = l2.next;
            }
            dummy = dummy.next;
        }
        // Appending the last element
        if(l1 != null){
            dummy.next = l1;
        } else {
            dummy.next = l2;
        }
        
        return head.next;
    }
}
