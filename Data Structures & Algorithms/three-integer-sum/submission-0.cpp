class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
        int b=nums.size()-1;
        int a=i+1;
          int target =(-1*nums[i]);
            while(a<b){
                int sum=nums[a]+nums[b]; 
                if(sum>target) b--;
                else if(sum<target) a++;
                else{
                    result.push_back({nums[i], nums[a], nums[b]});
                    while(a<b && nums[a]==nums[a+1]) a++;
                    while(a<b && nums[b]==nums[b-1]) b--;
                    a++; b--;
                }
            }
        }
                return result;
        }

    
};