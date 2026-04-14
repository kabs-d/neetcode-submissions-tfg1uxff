class Solution {
public:
 vector<vector<int>> fourSum(vector<int>& nums, int sum) {
    sort(nums.begin(), nums.end()); vector<vector<int>> result;
      for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1; j<nums.size(); j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int a=j+1; int b=nums.size()-1; long long target = (long long)sum - nums[i]-nums[j];
            while(a<b){
                long long curr = (long long)nums[a] + nums[b];
                if(curr<target){
                    while(a<b&&nums[a]==nums[a+1]) a++;
                    a++;
                }
                else if(curr>target){
                    while(a<b && nums[b]==nums[b-1]) b--;
                    b--;
                }
                else{
                    result.push_back({nums[i], nums[j], nums[a], nums[b]});
                    while(a<b&&nums[a]==nums[a+1]) a++;
                    while(a<b && nums[b]==nums[b-1]) b--;
                    a++; b--;
                }
            }
        }
      }
      return result;
    }
};