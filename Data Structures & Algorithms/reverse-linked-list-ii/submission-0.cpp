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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count=1;
        ListNode* curr=head; ListNode* prev=nullptr; ListNode*tail = nullptr; 
        ListNode*index1 = nullptr;
        while(curr){
            if(count==left){ 
                index1=prev; tail=curr;}
               
            if(count<left || count>right) {
                ListNode*temp = curr;
                curr=curr->next; count++; prev=temp;}
            else{
                ListNode*temp=curr;
                curr=curr->next;
                temp->next=prev;
                prev=temp;
                count++;
            }
             if(count==right+1){
                if(!index1) head=prev;
                else index1->next=prev;
                tail->next=curr;
            }
            
        }
        return head;
    }
};