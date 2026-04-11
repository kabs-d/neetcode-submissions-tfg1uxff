class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int idx=0;int count=1;
     for(int i=0; i<nums.size();i++){
        if(nums[i]!=nums[idx]) {
            count++;idx++;
            nums[idx]=nums[i];
        }  
       
    }
     return count; 
    }
};