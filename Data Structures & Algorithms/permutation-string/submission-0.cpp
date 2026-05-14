class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int matches=0; vector<int> s1_count(26,0); vector<int> s2_count(26,0);
       int len=s1.size();
       if(len>s2.size()) return false;
       for(int i=0; i<s1.size(); i++){
        s1_count[s1[i]-'a']++;
       }
       for(int i=0; i<s1.size(); i++){
        s2_count[s2[i]-'a']++;
       }
       for(int i=0; i<26; i++){
        if(s1_count[i]==s2_count[i]) matches++;
       }
       int l=0;
       for(int r=s1.size(); r<s2.size(); r++){
        if(matches==26) return true;
        int index=s2[r]-'a'; s2_count[index]++;
        if(s2_count[index]==s1_count[index]) matches++;
        if(s2_count[index]==s1_count[index]+1) matches--;
        index=s2[l]-'a';
        s2_count[index]--;
        if(s2_count[index]==s1_count[index]) matches++;
        if(s2_count[index]==s1_count[index]-1) matches--;
        l++;
       }
       return matches==26;
    }
};