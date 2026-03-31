class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(), nums.end());
        int count =1;
        for(int i=1; i<n;i++){
            if(count>(n/2)) return nums[i-1];
            if(nums[i]==nums[i-1]) count++;
            else count=1;
        }    
        return nums[n-1];
    }
};