class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        ListNode *temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=0;
        while(temp)
        {
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};