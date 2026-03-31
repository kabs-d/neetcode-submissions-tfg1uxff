class Solution {
public:
    bool isAnagram(string s, string t) {
              vector<int> count(26,0);
        if(s.size()!=t.size()) return false;
        int n = s.size();
        for (int i=0;i<n;i++){
            count[s[i]-'a']++;
            count[t[i] - 'a']--;
        }
        for(int i: count){
            if (i) return false;

    }
    return true;
   
    }
};
