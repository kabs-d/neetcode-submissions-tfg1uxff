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
        int size=0;
        ListNode* curr=head;
        while(curr){
            size++;
            curr=curr->next;
    }
        curr=head;int i=0;
        while(i<size/2){
            
            curr=curr->next; 
            i++;
        }
        ListNode* half=curr->next;
        curr->next=nullptr;
        half=reverseList(half); curr=head;
        while(half){
            ListNode* temp=curr; ListNode* temp1=half;
            curr=curr->next; half=half->next;
            temp->next=temp1;
            temp1->next=curr; 
        }

}

    ListNode* reverseList(ListNode* head) {
            if(!head||!head->next) return head;
            ListNode* NewHead= reverseList(head->next);
            head->next->next=head;
            head->next=nullptr;
            return NewHead;
                                                                                                     }
 }
        
;