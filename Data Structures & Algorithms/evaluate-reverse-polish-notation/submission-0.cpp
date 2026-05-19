class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operations= {"+","-","/","*"};
        stack<int> stack;
        for(int i=0; i<tokens.size();i++){
            if(operations.count(tokens[i])){
                int r=stack.top();
                stack.pop(); int l = stack.top(); stack.pop();
                if(tokens[i]=="+") stack.push(l+r);
                else if(tokens[i]=="-") stack.push(l-r);
                else if(tokens[i]=="*") stack.push(l*r);
                else if(tokens[i]=="/") stack.push(l/r);
            }

            else{
                stack.push(stoi(tokens[i]));
            }

        }
        return stack.top();
    }
};