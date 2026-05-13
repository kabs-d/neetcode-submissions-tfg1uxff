class Solution {
public:
    int characterReplacement(string s, int k) {
       int length=0; unordered_map<char , int> freq_hash;
       freq_hash[s[0]]++; int freq=0;
       int left=0; int right=0;
       while(right<s.size() && left<=right){
        freq=max(freq, freq_hash[s[right]]);
        if(right-left+1-freq<=k){
            length=max(length, right-left+1);
            right++; freq_hash[s[right]]++;
        }
        else{
            freq_hash[s[left]]--; left++; 
        }
       } 
       return length;
    }
};