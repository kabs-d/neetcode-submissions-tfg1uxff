class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char> window; int length=0;int res=0; int j=0;
     for(int i=0; i<s.size(); i++){
        if(window.count(s[i]))
        {
            res=max(res, length);
            while(window.count(s[i])){
                window.erase(s[j]);
                j++; length--;
            }
        }
        length++;
        window.insert(s[i]);
     }
     return max(res, length);
    }
};