class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> result;
        for(string s: strs){
            string key=s;
            sort(key.begin(), key.end());
            hash[key].push_back(s);
        }
        for(auto& it:hash){
            result.push_back(it.second);
        }
        return result;
            }
};