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
        Node*curr = head;
        Node*temp = new Node(curr->val);
        
        map[curr]= temp;
        if(head->next) temp->next= copyRandomList(head->next);  
        temp->random= map[curr->random];
        return map[head];

        

    }
};