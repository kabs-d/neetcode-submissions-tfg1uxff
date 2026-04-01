class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
              vector<int> products;
        vector<int> pre_prod;
        vector<int> post_prod;
        int n = nums.size();
        int left=1; int right = 1;
        for(int i=0; i<n;i++){
        pre_prod.push_back(left);
        left=left*nums[i];
        }
        for(int j=n-1;j>=0;j--){
            post_prod.push_back(right);
            right = right*nums[j];
        }
        for(int i =0; i<n;i++){
            products.push_back(pre_prod[i]*post_prod[n-1-i]);
        }
        return products;
    }
};
