class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int, int> hash;
        for(int i=0;i<nums.size();i++){
            auto it = hash.find(nums[i]);
            if(it!=hash.end()) return true;
            hash[nums[i]] = i;
        }
        return false;  
    }
};