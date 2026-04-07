class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(string s: strs){
            if(s=="") return "";
            while(prefix.size()){
                if(s.find(prefix)!=0) prefix.pop_back();
                else break;
            }
            if(!prefix.size()) return "";
        }
        return prefix;
    }
};