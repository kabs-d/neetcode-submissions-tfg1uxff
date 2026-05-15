class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack; int sum=0;
        for(const string& op:operations){
            if(op=="+"){
                int last=stack.back(); stack.pop_back();
                int second_last = stack.back();
                stack.push_back(last);
                stack.push_back(last+second_last);
                sum=sum + stack.back();
            }
            else if(op=="D"){
                stack.push_back(2*stack.back());
                sum=sum + stack.back();
            }
            else if(op=="C"){
                sum = sum-stack.back();
                stack.pop_back();
            }
            else{
                stack.push_back(stoi(op));
                sum=sum+stack.back();
            }
        }
        return sum;
    }
};