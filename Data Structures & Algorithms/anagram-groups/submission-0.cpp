class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> result;
       unordered_map<string, vector<string>> hash; 
       for(int i=0; i<strs.size();i++){
        int flag =0;
        if(strs[i].empty() ){
            auto it = hash.find("");
            if(it!=hash.end()){
                it->second.push_back("");
            }
            else{
                hash[""] = {""};
            }
            continue;
        }
        if(hash.empty()) {
            hash[strs[i]] = {strs[i]};
            continue;
        }
        vector<int> hash_arr(26,0);
        for(auto it: strs[i]){
            hash_arr[it - 'a']++;
        }
        for(auto &it : hash){
            flag =0;
            vector<int> temp(26,0);
            for(auto it1: it.first){
                temp[it1 - 'a']--;
        }
        for(int j=0;j<26;j++){
            temp[j]+=hash_arr[j];
        }
        for(int k=0;k<26;k++){
            if(temp[k]) flag=1;
        }
        if(flag==0){
        (it.second).push_back(strs[i]);
        break;
       }
       }
       if(flag) {
        hash[strs[i]] = {strs[i]};
    }
    }
    for(auto it2: hash){
        result.push_back(it2.second);
    }
    return result;
    }
};