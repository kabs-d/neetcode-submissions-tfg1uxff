class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int suff=nums[nums.size()-1];
        unordered_map<int,int> suffix_sum_freq;
        suffix_sum_freq[suff]++;
        if(suff==k) count++;
        for(int i=nums.size()-2; i>-1;i--){
            suff+=nums[i];
            if(suff==k) count++;
            count=count+suffix_sum_freq[suff-k];
            suffix_sum_freq[suff]++;
        }
        return count;
    }
};