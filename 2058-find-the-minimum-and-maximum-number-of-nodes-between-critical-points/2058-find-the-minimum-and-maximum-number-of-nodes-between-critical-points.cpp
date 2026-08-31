static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = head->next->next;

        int firstCritIdx = -1;
        int prevCritIdx = -1;
        int minDistance = INT_MAX;
        int idx = 1;

        while (nxt) {
            if ((curr->val > prev->val && curr->val > nxt->val) ||
                (curr->val < prev->val && curr->val < nxt->val)) {
                
                if (firstCritIdx == -1) {
                    firstCritIdx = idx;
                } else {
                    minDistance = min(minDistance, idx - prevCritIdx);
                }
                prevCritIdx = idx;
            }

            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            idx++;
        }

        if (firstCritIdx == prevCritIdx) {
            return {-1, -1};
        }

        return {minDistance, prevCritIdx - firstCritIdx};
    }
};