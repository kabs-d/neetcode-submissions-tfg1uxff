class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word = strs[0];
      string result = word;
      for(auto it = strs.begin()+1; it!=strs.end();it++){
        string temp;
        string s = (*it);
        for(int i=0;i<min(s.size(), word.size());i++){
            if (s[i]==word[i]){ 
            temp.push_back(s[i]);
            }
            else{
                break;
            }

        }
        if (temp.size()<result.size()) {
            result = temp;
        }
      }
      return result;
    }
};