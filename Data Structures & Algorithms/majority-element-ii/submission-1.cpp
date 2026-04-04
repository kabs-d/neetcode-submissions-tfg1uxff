class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        unordered_map<int, int> hash;
        vector<int> result;
        for(int n : nums){
            hash[n]++;
        }
        for(auto& p: hash){
            if(p.second>n) result.push_back(p.first);
        }
        return result;
        
    }
};