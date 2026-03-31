class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return nums[0];
        int res = 0; int count =0;
        for(int num: nums){
            if(!count) res = num;
            if(res == num) count++;
            else count--;
        }
        return res;
    }
};