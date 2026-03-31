class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s: strs){
            for(char c : s){
                encoded.push_back(int(c));
            }
            encoded.push_back('_');
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string temp="";
        for(char c : s){
            if(char(c)!='_') temp.push_back(char(c));
            else{
                decoded.push_back(temp);
                temp ="";
            }
        }
        return decoded;
    }
};
