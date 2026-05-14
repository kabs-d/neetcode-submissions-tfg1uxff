class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res; int sum=0; int start_index=0;
        for(int i=0;i<k;i++){
            sum = sum + abs(arr[i]-x);
        }
        int min_sum = sum;
        for(int right=k; right<arr.size(); right++ ){
            int left=right-k+1;
            sum = sum - abs(arr[left-1]-x);
            sum = sum + abs(arr[right]-x);
            if(sum<min_sum){
                min_sum=sum;
                start_index=left;
            }
            
        }
        for(int i=start_index; i<start_index+k; i++){
            res.push_back(arr[i]);
        }
        return res;

    }
};