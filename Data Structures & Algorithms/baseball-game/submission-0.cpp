class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        vec.push_back(stoi(operations[0])); int index=0;
        for(int i=1; i<operations.size(); i++){
            if(operations[i]=="+") {
                vec.push_back(vec[index]+vec[index-1]);
                index++;
            }
            else if(operations[i]=="D"){
                vec.push_back(2*vec[index]); index++;
            }
            else if(operations[i]=="C"){
                vec.pop_back(); index--;
            }
            else{
                vec.push_back(stoi(operations[i]));
                index++;
            }
        }
        int sum=0;
        for(int i: vec){
            sum=sum+ i;
        }
        return sum;
    }
};