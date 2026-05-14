class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char> window; int length=0;int res=0; int j=0;
     for(int i=0; i<s.size(); i++){
        res=max(res, (int)window.size());
            while(window.count(s[i])){
                window.erase(s[j]);j++;
            }
            window.insert(s[i]);
        }
        
       return max(res, (int)window.size()); 
     }
     
    
};