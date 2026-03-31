class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> hash;
       int n = nums.size();
       for(int i=0; i<n;i++){
        int complement = target - nums[i];
        auto it = hash.find(complement);
        if(it!=hash.end()) return {it->second, i};
        hash[nums[i]] = i;
       }
       return {};
    }
};
