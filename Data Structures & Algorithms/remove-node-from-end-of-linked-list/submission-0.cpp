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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head; ListNode* future=curr; ListNode* prev=nullptr;
        while(true){
            future=curr;
            for(int i=1; i<n+1; i++){
                future=future->next;
            }
            if(!future) break;
            prev=curr;
            curr=curr->next;
        }
        if(!prev) head=head->next;
        else {
        ListNode* temp=prev->next;
        prev->next=prev->next->next;
        temp->next=nullptr;}
        return head;
    }
};