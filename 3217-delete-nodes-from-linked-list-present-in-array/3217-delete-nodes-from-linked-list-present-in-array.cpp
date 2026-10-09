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
        bool remove[100001] = {};
        for (int x : nums)
            remove[x] = true;
        while (head && remove[head->val])
            head = head->next;
        if (!head)
            return nullptr;
        ListNode* cur = head;
        while (cur->next) {
            if (remove[cur->next->val])
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        return head;
    }
};