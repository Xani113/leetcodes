class Solution {
    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null) return head;
        if (head.next.next == null) {
            if (head.val > head.next.val) {
                ListNode next = head.next;
                head.next = null;
                next.next = head;
                return next;
            }
            return head;
        }
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode right = slow.next;
        slow.next = null;
        ListNode leftSorted = sortList(head);
        ListNode rightSorted = sortList(right);
        return merge(leftSorted, rightSorted);
    }
    private ListNode merge(ListNode l1, ListNode l2) {
        ListNode head, tail;
        if (l1.val <= l2.val) {
            head = tail = l1;
            l1 = l1.next;
        } else {
            head = tail = l2;
            l2 = l2.next;
        }
        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                tail.next = l1;
                l1 = l1.next;
            } else {
                tail.next = l2;
                l2 = l2.next;
            }
            tail = tail.next;
        }
        tail.next = (l1 != null) ? l1 : l2;
        return head;
    }
}