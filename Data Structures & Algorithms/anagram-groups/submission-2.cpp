class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> result;
       unordered_map<string, vector<string>> hash;
       for(string s: strs){
        string copy = s;
        sort(copy.begin(), copy.end());
        hash[copy].push_back(s);
        }
        for( auto& it: hash){
            result.push_back(it.second);
        }
        return result;
    }
};