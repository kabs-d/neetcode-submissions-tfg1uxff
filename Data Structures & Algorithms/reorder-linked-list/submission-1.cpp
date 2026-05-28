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
    void reorderList(ListNode* head) {
    ListNode* curr= head; int size=0;
    while(curr){
        size++;
        curr=curr->next;
        
    }
    int count=0; curr=head;
    while(count<size/2){
        curr=curr->next; count++;
    }
    ListNode*temp=curr->next; curr->next=nullptr;
    ListNode* newHead=reverseList(temp);
    ListNode* curr1=head; ListNode*curr2=newHead;
    while(curr2){
        ListNode* temp1=curr1; ListNode* temp2=curr2; //check for space
        curr1=curr1->next; curr2=curr2->next;
        temp1->next=temp2; temp2->next=curr1;
    }
    }
    ListNode* reverseList(ListNode* head){
        if(!head||!head->next) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newHead;
    }
 }
        
;