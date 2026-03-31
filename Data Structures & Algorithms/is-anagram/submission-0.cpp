class Solution {
public:
    bool isAnagram(string s, string t) {
             unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        int size1 = s.size();
        int size2 = t.size();
        if(size1!=size2) return false;
        for (int i=0;i<size1;i++){
            map1[s[i]]++;
        }
        for (int i=0;i<size2;i++){
            map2[t[i]]++;
        }
        
        for (auto it : map1){
            if(map2.find(it.first)== map2.end() or map2[it.first]!=it.second){
                return false;
            }
        }
        
        return true;
   
    }
};
