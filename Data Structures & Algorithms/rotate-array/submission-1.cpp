class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int i=0; int j=nums.size()-1; 
       k=k%nums.size();
       while(i<j){
        swap(nums[i], nums[j]);
        i++; j--;
       }
       i=0; j=k-1;
       while(i<j){
        swap(nums[i], nums[j]);
        i++;j--;
       }
       i=k;j=nums.size()-1;
       while(i<j){
        swap(nums[i], nums[j]);
        i++;j--;
       }
}
};