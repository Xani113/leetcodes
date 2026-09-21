static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        // Stack-allocated dummy head eliminates dynamic heap overhead
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        // 1. Advance 'prev' to the node immediately before position 'left'
        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        // 'curr' will be the first node of the sublist to reverse
        ListNode* curr = prev->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* next_node = curr->next;
            curr->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
        }

        return dummy.next;
    }
};