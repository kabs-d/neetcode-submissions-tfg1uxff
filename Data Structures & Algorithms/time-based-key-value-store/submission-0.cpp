class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> store; 
    TimeMap() {
      
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({value, timestamp});

    }
    
    string get(string key, int timestamp) {
        if(store[key].empty()||store[key][0].second>timestamp) return "";
        int left=0; int right=store[key].size()-1;
        while(left<right){
            int mid=left+(right-left+1)/2;
            if(store[key][mid].second>timestamp) right=mid-1;
            else if(store[key][mid].second<=timestamp) left=mid;
        }
        return store[key][left].first;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */