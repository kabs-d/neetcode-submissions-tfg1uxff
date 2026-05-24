class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0; int right=nums.size()-1; int size = (int)nums.size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[((mid-1)%size + size)%size]>nums[mid]&&nums[(mid+1)%size]>nums[mid]) return nums[mid];
            else if(nums[mid]<=nums.back()) right=mid-1;
            else left=mid+1;
        }
    return nums[left];
    }
};