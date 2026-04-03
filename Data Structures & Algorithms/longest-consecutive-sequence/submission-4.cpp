class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        unordered_map<int, int> hash;
        int maxLen =0;
        for(int i: s){
            if(!(s.count(i-1))) {
                hash[i]=i;
                maxLen=1;
            }
        }
        while(!(hash.empty())){
        for(auto it=hash.begin(); it!=hash.end();){
            if(s.count((it->second)+1)) {
                it->second=it->second + 1;
            }
            else{
                int size = (it->second)-(it->first)+1;
                if(size>maxLen) maxLen = size;
                it = hash.erase(it);
            }
        
        }
    }
        return maxLen;

    }
};