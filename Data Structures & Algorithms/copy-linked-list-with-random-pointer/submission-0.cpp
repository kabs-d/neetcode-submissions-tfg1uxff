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
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> map;
        Node*curr = head;
        while(curr){
         if(map.find(curr)!=map.end()){
            map[curr]->val=curr->val;
         }
         else{
            map[curr]=new Node(curr->val);
         }
         if(curr->next){
         if(map.find(curr->next)!=map.end()) map[curr]->next=map[curr->next];
         else{
            map[curr->next]= new Node(0);
            map[curr]->next=map[curr->next];
         }     }
         if(curr->random){   
         if(map.find(curr->random)!=map.end()) map[curr]->random=map[curr->random];
         else{
            map[curr->random]=new Node(0);
            map[curr]->random=map[curr->random];
         }}
         else map[curr]->random=nullptr;
         curr=curr->next;
         }
        
        return map[head];
    }
};