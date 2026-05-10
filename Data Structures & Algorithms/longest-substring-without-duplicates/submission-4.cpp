class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int count=0; int start_index=0;
       unordered_set<char> window;
       for(int i=0; i<s.size(); i++){
          
            while(window.count(s[i])){
                window.erase(s[start_index]);
                start_index++;
            }
        
        window.insert(s[i]);
          count=max(count, (int)window.size());
       }
       return count;
    }
};