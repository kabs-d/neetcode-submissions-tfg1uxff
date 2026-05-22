class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=1; int right=nums.size();
        if(target<nums[0]) return 0;
        while(left<right){
            int mid=left + (right-left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) right=mid;
            else left=mid+1;
        }
        if(nums[right-1]==target) return right-1;
        else return right;
    }
};