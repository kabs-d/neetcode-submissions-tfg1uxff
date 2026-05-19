class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int i=0; i<asteroids.size(); i++){
            int num = asteroids[i]; 
            res.push_back(num);
            while(res.size()>1 && res.back()<0 && res[res.size()-2]>0){
                res.pop_back();
                if(abs(num)==res.back()) {
                    res.pop_back();
                    }
                else if(abs(num)<res.back()) continue;
                else{
                    res.pop_back();
                    res.push_back(num);
                }
                }

        }
        return res;
    }
};