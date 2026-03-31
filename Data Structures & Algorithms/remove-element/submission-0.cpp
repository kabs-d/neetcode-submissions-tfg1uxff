class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int> result;
       result.reserve(nums.size());
       for(auto& i : nums){
        if(i!=val) result.push_back(i);
       }
       nums = result;
       return result.size(); 
    }
};