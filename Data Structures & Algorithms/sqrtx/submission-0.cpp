class Solution {
public:
    int mySqrt(int x) {
        int l=0; int r=x;
        if(x==0) return x;
        while(l<=r){
            long long mid = l + (r-l)/2;
            if(mid*mid<=(long long)x && (mid+1)*(mid+1)>(long long)x) return mid;
            else if(mid*mid>(long long)x) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};