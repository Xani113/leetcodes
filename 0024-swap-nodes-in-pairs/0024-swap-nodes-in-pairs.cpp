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