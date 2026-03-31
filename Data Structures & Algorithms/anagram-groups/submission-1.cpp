class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       if(strs.empty()) return {};
       vector<vector<string>> result;
       unordered_map<string, vector<string>> hash;
       for(string s: strs){
        vector<int> profile(26, 0);
        for( char c: s){
            profile[c-'a']++;
        }
        string profile_string = to_string(profile[0]);
        for( int i=1; i<26;i++){
            profile_string += ',' + to_string(profile[i]);
        }
        hash[profile_string].push_back(s);
        }
        for( auto& it: hash){
            result.push_back(it.second);
        }
        return result;
    }
};