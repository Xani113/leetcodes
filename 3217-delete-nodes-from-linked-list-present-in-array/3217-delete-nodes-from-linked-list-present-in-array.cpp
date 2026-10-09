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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        std::sort(nums.begin(), nums.end());
        ListNode** curr = &head;
        while (*curr != nullptr) {
            if (std::binary_search(nums.begin(), nums.end(), (*curr)->val)) {
                *curr = (*curr)->next;
            } else {
                curr = &((*curr)->next);
            }
        }
        return head;
    }
};