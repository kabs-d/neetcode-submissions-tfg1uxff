class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        int count1=0, count2=0;
        int curr1=0,curr2=0;
        for(int i: nums){
            if(i==curr1) count1++;
            else if(i==curr2) count2++;
            else if(!count1) {
                curr1=i;
                count1++;
            }
            else if(!count2) {
                curr2=i;
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }
        int freq1=0, freq2=0;
        for(int i:nums){
            if(count1>0){
                if(i==curr1) freq1++;}
            if(count2>0){
            if(i==curr2) freq2++;}
        }
        vector<int> result;
        if(freq1>n) result.push_back(curr1);
        if(freq2>n) result.push_back(curr2);
        
        return result;
        
        
    }
};