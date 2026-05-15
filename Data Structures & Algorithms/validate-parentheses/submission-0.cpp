class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(char c: s){
            if(c=='(') stack.push_back(')');
            else if(c=='[') stack.push_back(']');
            else if (c=='{') stack.push_back('}');
            else{
                if(stack.empty()) return false;
                if(c!=stack.back()) return false;
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};