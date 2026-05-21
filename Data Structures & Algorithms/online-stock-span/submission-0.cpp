class StockSpanner {
    stack<pair<int,int>> stack1;
public:
    StockSpanner(){



}

    
    int next (int price){
int curr=1;
if(stack1.empty()) stack1.push({price,1});
else{
while(!stack1.empty() && stack1.top().first<=price) {
curr=curr+stack1.top().second;
stack1.pop();
}
stack1.push({price,curr});

}
return curr;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */