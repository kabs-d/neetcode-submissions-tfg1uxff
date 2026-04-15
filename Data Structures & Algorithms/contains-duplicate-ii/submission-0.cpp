class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        for(int i=0; i< nums.size(); i++){
            unordered_map<int, int> store;
            for(int j=i; j<=i+k && j<nums.size();j++){
                store[nums[j]]++;
                if(store[nums[j]]>1) return true;
            }
        }
        return false;
    }
};