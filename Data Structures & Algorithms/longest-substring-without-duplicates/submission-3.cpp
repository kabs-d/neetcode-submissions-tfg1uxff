class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0; int left=0;
        unordered_set<char> window;
        for(int r=0; r<s.size(); r++ ){
            while(window.count(s[r])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[r]);
            length=max(length, (int)window.size());
            }
        return length;
    }
};