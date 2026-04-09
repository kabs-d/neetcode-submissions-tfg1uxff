class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int pointer1=0; int pointer2=0;
        int n1=word1.size(); int n2=word2.size();
        string result;
        while(pointer1<n1||pointer2<n2){
            if(pointer1<=n1-1) result.push_back(word1[pointer1]);
            if(pointer2<=n2-1) result.push_back(word2[pointer2]);
            pointer1++;
            pointer2++;
        }
        return result;
    }
};