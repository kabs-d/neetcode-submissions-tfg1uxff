class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
        

    }
    
    void push(int x) {
        q.push(x); 
    }
    
    int pop() {
     int i=0; int size = q.size();
     while(i<size-1){
        q.push(q.front());
        q.pop(); i++;
     }
     i=q.front();
     q.pop();
     return i;
    }
    
    int top() {
         int i=0; int size = q.size();
     while(i<size-1){
        q.push(q.front());
        q.pop(); i++;
     }
     i=q.front();
     q.push(q.front());
     q.pop();
     return i;

    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */