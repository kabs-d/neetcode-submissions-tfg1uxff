class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int flag=0; int sum=0;
        int left=0; int res=nums.size();
        for(int right=0; right<nums.size(); right++){
            sum=sum+nums[right];
            if(sum>=target) flag=1;
            while(sum>=target) {
                res=min(res, right-left+1);
                sum=sum-nums[left];
                left++; 
            }
            
            }
        if(flag==0) return 0;        
        return res;
        }
        
    
};