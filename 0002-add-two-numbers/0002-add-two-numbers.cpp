static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
            }
            if (l2) {
                sum += l2->val;
            }

            carry = sum / 10;
            int digit = sum % 10;

            // Reuse existing nodes in-place instead of calling 'new'
            if (l1) {
                l1->val = digit;
                tail->next = l1;
                l1 = l1->next;
            } else if (l2) {
                l2->val = digit;
                tail->next = l2;
            } else {
                tail->next = new ListNode(digit); // Only allocate for final carry overflow
            }

            if (l2) l2 = l2->next;
            tail = tail->next;
        }

        return dummy.next;
    }
};