class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0; int j=height.size()-1;
        int area=min(height[i], height[j])*(j-i);
        while(i<j){
            if(height[i]<=height[j]) i++;
            else j--;
            int curr=min(height[i], height[j])*(j-i);
            if(curr>area) area=curr;
        }
        return area;
    }
};