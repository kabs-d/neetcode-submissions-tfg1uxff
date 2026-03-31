class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return nums[0];
        int j=nums[j]; int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==j) count++;
            else count--;
            if(!count) j=nums[i];
        }
        return j;
    }
};