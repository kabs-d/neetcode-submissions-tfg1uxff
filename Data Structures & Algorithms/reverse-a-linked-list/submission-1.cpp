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
    ListNode* reverseList(ListNode* head) {
       
       
       if(!head) return nullptr;
       ListNode *curr=head->next;
       ListNode *temp=curr;
       head->next=nullptr; ListNode *reverse=head;
       while(curr){
        curr=curr->next;
        temp->next=reverse;
        reverse=temp; temp=curr;
       } 
       
       return reverse;
    }
};