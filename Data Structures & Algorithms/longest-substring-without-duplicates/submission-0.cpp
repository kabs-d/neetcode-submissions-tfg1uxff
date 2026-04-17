class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0; unordered_set<char> window; int left=0;
        for(int i=0; i<s.size(); i++){
            if(window.count(s[i])){
                length=max(length, (int)window.size());
                while(window.count(s[i])){
                    window.erase(s[left]);
                    left++;
                }
                window.insert(s[i]);
            }
            else{
                window.insert(s[i]);
            }
            
        }
    return max(length, (int)window.size());
    }
};