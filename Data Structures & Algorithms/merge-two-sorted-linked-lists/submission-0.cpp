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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr; ListNode* curr1=list1; ListNode* curr2=list2; ListNode* newHead;
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val<=list2->val) {
            curr=list1;
            newHead=list1;
            curr1=curr1->next;
            }
        else {curr=list2; newHead=list2; curr2=curr2->next;}
        while(curr1||curr2){
            if(!curr1) {
                curr->next=curr2; break;
            }
            if(!curr2){
                curr->next=curr1; break;
            }
            if( curr1->val<=curr2->val) {
                curr->next=curr1;
                curr=curr1;
                curr1=curr1->next;
            }
            else{
                curr->next=curr2;
                curr=curr2;
                curr2=curr2->next;
            }
        }
        return newHead;
    }
};