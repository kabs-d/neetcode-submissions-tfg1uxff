class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> store={
            {')','('},{'}','{'},{']','['}
        }; stack<char> stack;
        for(char c:s){
            if(store.count(c) ){
                if(!stack.empty()&& stack.top()==store[c]) stack.pop();
                else return false;
            } 
            else stack.push(c);
        }
        return stack.empty();
    }
};