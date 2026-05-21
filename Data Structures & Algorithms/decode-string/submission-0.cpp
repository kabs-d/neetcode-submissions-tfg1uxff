class Solution {
public:
    string decodeString(string s) {
        string stack; string res;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=']') stack.push_back(s[i]);
            else{
                string curr; 
                while(stack.back()!='[') {
                    curr.push_back(stack.back());
                    stack.pop_back();
                }
                reverse(curr.begin(), curr.end());
                 stack.pop_back();
                 string temp=curr;
                 string k;;
                 while(!stack.empty() && isdigit(stack.back())) {
                    k.push_back(stack.back());
                    stack.pop_back();
                 }
                 reverse(k.begin(), k.end());
            for(int j=0; j<stoi(k)-1;j++){
                curr+=temp;;
            }
            stack+=curr;
            }
            }
            return stack;
        }

    
};