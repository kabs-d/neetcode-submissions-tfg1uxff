/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> map;

    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
       Node* curr=head;
       while(curr){
        Node*copy = new Node(curr->val);
        Node*temp=curr;
        curr=curr->next;
        temp->next=copy;
        copy->next=curr;
        copy->random=temp->random;
       }
       curr=head->next;
       while(curr){
        if(curr->random){
        curr->random=curr->random->next;}
       curr=curr->next;
       if(curr) curr=curr->next;
       }
       curr=head; Node* new_head=curr->next;
       while(curr){
        Node* copy=curr->next;
        curr->next=copy->next; 
        if(copy->next) copy->next=copy->next->next;
        else copy->next=nullptr;
        curr=curr->next;
       }
       return new_head;
    }
};