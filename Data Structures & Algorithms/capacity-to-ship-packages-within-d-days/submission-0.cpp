class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(), weights.end());
        int right=accumulate(weights.begin(), weights.end(), 0);
        while(left<right){
            int i=0; int capacity = left + (right-left)/2;
            for(int j=0; i<weights.size() && j<days;j++){
                int sum=0; 
                while(i<weights.size() && sum+weights[i]<=capacity){
                    sum+=weights[i];
                    i++;
                }
                }
            if(i<weights.size()) left=capacity+1;
            else right=capacity;
        }
        return left;

    }
};