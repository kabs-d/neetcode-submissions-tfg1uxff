class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, count=0;
        for(int i: nums){
            sum= sum+i;
        }
        unordered_map<int, int> suffix_sum;
        suffix_sum[0]=sum;
        for(int i=1; i<nums.size();i++){
            suffix_sum[i]=suffix_sum[i-1]-nums[i-1];
            if(suffix_sum[i]==k) count++;
        }
        if(sum==k) count++;
        for(int i=0; i<nums.size();i++){
            for(int j=i; j<nums.size()-1;j++){
        if((suffix_sum[i]-suffix_sum[j+1])==k) count++;
            }}
        return count;
    }
};