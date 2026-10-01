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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* ll=head;
        ListNode* curr=head->next;
        while(curr){
            if(curr->val >= ll->val){
                ll=curr;
            }else{
                ll->next=curr->next;
                ListNode** scan=&head;
                while((*scan)->val<=curr->val){
                    scan=&((*scan)->next);
                }
                curr->next=*scan;
                *scan=curr;
            }
            curr=ll->next;
        }
        return head;
    }
};