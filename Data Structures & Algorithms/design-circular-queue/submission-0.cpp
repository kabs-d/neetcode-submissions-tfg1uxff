class MyCircularQueue {
public:
struct ListNode {
         int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* head= new ListNode(0);int space=0; int size=0; ListNode* tail=head;
    MyCircularQueue(int k) {
         ListNode* curr=head; 
        for(int i=0; i<k; i++){
            ListNode* temp= new ListNode(0);
            curr->next=temp;
            curr=curr->next;
        }
        head=head->next; 
        curr->next=head;
        space=k; size=k;
    }
    
    bool enQueue(int value) {
        if(!space) return false;
        tail->next->val=value;
        space--; tail=tail->next;
        return true;
    }
    
    bool deQueue() {
        if(space==size) return false;

        head=head->next;
        space++;
        return true;
    
    }
    
    int Front() {
        if(size==space) return -1;
        return head->val;
    }
    
    int Rear() {
        if(size==space) return -1;
        
        return tail->val;
    }
    
    bool isEmpty() {
        if(size==space) return true;
        return false;
    }
    
    bool isFull() {
        if(space==0) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */