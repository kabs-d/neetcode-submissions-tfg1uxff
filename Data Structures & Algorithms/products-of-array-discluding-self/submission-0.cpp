class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
             vector<int> products;
        for(int i=0; i<nums.size();i++){
            vector<int> copy = nums;
            swap(copy[i], copy[nums.size()-1]);
            int prod=1;
            for(int j=0; j<nums.size()-1;j++){
                prod=prod*copy[j];
            }
            products.push_back(prod);
        }
        return products;
    }
};
