class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int left=0; int res=nums.size()+1;
        for(int right=0; right<nums.size(); right++){
            sum=sum+nums[right];
            while(sum>=target) {
                res=min(res, right-left+1);
                sum=sum-nums[left];
                left++; 
            }
            
            }
        if(res==nums.size()+1) return 0;        
        return res;
        }
        
    
};