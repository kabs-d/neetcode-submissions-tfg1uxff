class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> hash;
        int n = nums.size();
        hash.reserve(n);
        for(int i : nums){
            hash[i]++;
        }
        for(auto& it : hash){
            if(it.second > (n/2)) return it.first; 
        }       
        return -1;
    }
};