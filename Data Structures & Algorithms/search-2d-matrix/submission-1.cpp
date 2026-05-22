class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m= matrix.size(); int n=matrix[0].size(); vector<int> nums;
       for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            nums.push_back(matrix[row][col]);
        }
       }
       int left=0; int right = (int)nums.size()-1;
       while(left<=right){
        int mid=left + (right-left)/2;
        if(nums[mid]==target) return true;
        else if(nums[mid]>target) right=mid-1;
        else left=mid+1;
       }
       return false;
    }
};