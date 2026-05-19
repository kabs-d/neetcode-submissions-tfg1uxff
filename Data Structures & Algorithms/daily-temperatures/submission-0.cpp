class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<pair<int,int>> stack;
        for(int i=0; i<temperatures.size();i++){
        while(!stack.empty() && stack.top().first<temperatures[i]) {
            res[stack.top().second]=(i - stack.top().second);
            stack.pop();
        }
        stack.push({temperatures[i], i});
        }
        return res;
    }
};