class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        for(char c : s){
            if(isalnum(c)){
                s[j++]=tolower(c);
            }
        } 
        s.resize(j);
        int left=0; int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]) return false;
            else{
                left++;
                right--;
            } 
           
        }
         return true;
    }
};