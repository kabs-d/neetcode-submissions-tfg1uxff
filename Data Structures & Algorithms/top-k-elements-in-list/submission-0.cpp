class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
vector<pair<int, int>> store;
vector<int> result;
for(int i : nums){
	map[i]++;
}
for(auto& p: map){
	store.push_back(p);
	}
for(auto& pair: store){
	swap(pair.first,pair.second);
}
sort(store.begin(), store.end(), greater<>());
for(int i=0;i<k;i++){
	result.push_back(store[i].second);
}
return result;

    }
};