static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode** curr = &head;
        while (*curr && (*curr)->next) {
            ListNode* first = *curr;
            ListNode* second = first->next;
            first->next = second->next;
            second->next = first;
            *curr = second;
            curr = &(first->next);
        }
        return head;
    }
};