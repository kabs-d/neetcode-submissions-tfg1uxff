class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(), nums.end()); vector<vector<int>> result;
       for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int a=i+1; int b=nums.size()-1; int target=-1*(nums[i]);
        while(a<b){
            if((nums[a]+nums[b])<target){ while(a<b && nums[a]==nums[a+1]) a++; a++;}
            else if ((nums[a]+nums[b])>target) {while(a<b && nums[b]==nums[b-1]) b--;b--;}
            else {
                result.push_back({nums[i], nums[a], nums[b]});
                while(a<b && nums[a]==nums[a+1]) a++;
                while(a<b && nums[b]==nums[b-1]) b--;
                a++;b--;
        }
     
    }
       }
       return result;
    }
 

    
};