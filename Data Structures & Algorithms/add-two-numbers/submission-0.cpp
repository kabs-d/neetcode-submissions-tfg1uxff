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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp; ListNode* head=l2; int carry=0; int digit=0;
         while(l1&&l2){
            int sum = l1->val + l2->val;
                carry=sum/10; digit=sum%10;
                l2->val = digit;
                if(!l2->next) temp=l2;
                l2=l2->next; l1=l1->next;
                if(l2) l2->val+=carry;
                else if(l1) l1->val+=carry;

         }
         if(l1) temp->next=l1;
         while(l1){
            
            carry=l1->val/10; digit=l1->val%10;
            l1->val=digit;
            if(!l1->next) temp=l1;
            l1=l1->next;
            if(l1) l1->val+=carry;
         }
         while(l2){
            
            carry=l2->val/10; digit=l2->val%10;
            l2->val=digit;
            if(!l2->next) temp=l2;
            l2=l2->next;
            if(l2) l2->val+=carry;
         }
         ListNode* end= new ListNode(carry, nullptr);
         if(carry) temp->next=end;
         return head;
         }
};