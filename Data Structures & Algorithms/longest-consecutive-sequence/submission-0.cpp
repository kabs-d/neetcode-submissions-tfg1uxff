class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        unordered_map<int, vector<int>> hash;
        vector<int> sizes;
        for(int i: s){
            if(!(s.count(i-1))) hash[i].push_back(i);
        }
        while(!(hash.empty())){
        for(auto it=hash.begin(); it!=hash.end();){
            if(s.count(it->second.back()+1)) {
                it->second.push_back(it->second.back()+1);
                ++it;
            }
            else{
                sizes.push_back(it->second.size());
                it = hash.erase(it);
            }

        }
    }
        int max=0;
        for(int i: sizes){
            if(i>max) max = i;
        }
        return max;

    }
};