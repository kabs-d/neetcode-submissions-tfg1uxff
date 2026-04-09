class Solution {
public:
    bool checkPalindrome(string s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--; 
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int left=0; int right=n-1;
        while(left<right){
            if(s[left]!=s[right]) return checkPalindrome(s, left+1, right)||checkPalindrome(s, left, right-1);
            left++;right--;
        }
        return true;
        }

    
};