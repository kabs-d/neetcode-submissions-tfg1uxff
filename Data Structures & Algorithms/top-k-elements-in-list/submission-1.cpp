class Solution {
public:
   unordered_map<int, int> hash_map ;
        for(int i=0; i<nums.size();i++){
            hash_map[nums[i]]++;       
    }
        vector<vector<int>> freq(nums.size()+1);
        for(auto& it: hash_map){
        freq[it.second].push_back(it.first);
        }
        vector<int> result;
        for(int i=freq.size()-1;i>=0;i--){
            for(int j: freq[i]){
                result.push_back(j);
            }
            if(result.size()==k) return result;
            
        }
        return result;

    }
};