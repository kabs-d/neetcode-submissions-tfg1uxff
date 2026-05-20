class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet=0;
        unordered_map<int, int> store;
        for(int i =0; i<position.size(); i++){
            store[position[i]]=speed[i];
        }
        sort(position.begin(), position.end());
        
        stack<double> stack;
        for(int i=position.size()-1; i>=0; i--){
            double time = (double)(target - position[i]) / store[position[i]];
            if(!stack.empty()){
                if(time>stack.top()) stack.push(time);
                else fleet++;
            }
            else stack.push(time);
        }
        return stack.size();
    }

};