class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int top=0; int bot=(int)matrix.size()-1;
       int left=0; int right=(int)(matrix[0].size())-1;
       while(top<=bot && left<=right){
        int mid = matrix[top + (bot-top)/2][left + (right-left)/2];
        if(mid==target) return true;
        else if(mid<target){
            if(left==(int)(matrix[0].size())-1){
                left=0; top++;
            }
            else left++;
        }
        else {
            if(right==0){
                right=(int)((matrix[0]).size())-1; bot--;
                }
            else right--;
        }
       }
       return false;
    }
};