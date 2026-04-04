class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest=0;
        for(int x: s){
            int length=0;
            if(!s.count(x-1)){
                length=1;
                while(s.count(x+length)){
                    length++;
                }
                longest = max(length, longest);
            }

        }
        return longest;
    }
};