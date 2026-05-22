class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0; int right=(int)nums.size()-1;
        if(target<=nums[0]) return 0;
        while(left<right){
            int mid=left + (right-left+1)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) left=mid;
            else right=mid-1;
        }
        
        return left+1;
    }
};