class Solution{
public:
    string simplifyPath(string path){
	vector<string> stack;
    string curr; string res;
    stringstream ss(path);
    while(getline(ss, curr, '/')){
        if(curr.empty()) continue;
        else{
            if(curr=="..") {
                if(!stack.empty()) stack.pop_back();
            }
            else if(curr==".") continue;
            else {
                 stack.push_back(curr);
            }
        }
    }
    if(stack.empty()) return "/";
    for(int i=0; i<stack.size(); i++){
        res.push_back('/');
        res+=stack[i];
    }
    return res;
}};