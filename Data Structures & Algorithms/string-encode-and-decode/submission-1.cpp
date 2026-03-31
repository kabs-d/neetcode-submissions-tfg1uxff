class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s: strs){
            encoded.append(to_string(s.size()));
            encoded.push_back(',');
        }
        encoded.push_back('#');
        for(string s : strs){
            encoded.append(s);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s=="0") return {""};
        vector<int> sizes;
        vector<string> decoded;
        int i=0;
        while(s[i]!='#'){
            string curr;
                while(s[i]!=','){
                curr.push_back(s[i]);
                i++;
                    }
            sizes.push_back(stoi(curr));
                i++;
            }
        for(int j: sizes){
            decoded.push_back(s.substr(i+1,j));
            i=i+j;
        }
        return decoded;
    }
};
