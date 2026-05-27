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
       vector<ListNode *> vec;
       ListNode *curr=head;
       if(!head) return nullptr;
       while(curr){
        vec.push_back(curr);
        curr=curr->next;
       } 
       ListNode *reverse = vec.back(); curr = vec.back();
       for(int i=vec.size()-2; i>=0; i--){
        curr->next=vec[i];
        curr=curr->next;}
        curr->next=nullptr;
       return reverse;
    }
};