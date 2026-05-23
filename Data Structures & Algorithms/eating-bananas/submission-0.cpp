class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int l = 0;
    int r = *max_element(piles.begin(), piles.end());
    while(l<r){
        int mid= l+(r-l+1)/2; long long hours=0;
        for(int i=0; i<piles.size(); i++){
            hours=hours + ceil((double)piles[i]/mid); 
        }
        if(hours>h) l=mid;
        else if(hours<=h) r=mid-1;
        
    }
    return l+1;
    }
};