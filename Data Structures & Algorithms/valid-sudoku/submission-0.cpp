class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for( int i=0; i<9;i++){
            vector<int> hash(10,0);
            for(int j: board[i]){
                if(j!='.'){
                hash[j-'0']++;
                if(hash[j-'0']>1) return false;
                }
            }
        }
        for(int col=0; col<9; col++){
            vector<int> hash(10,0);
            for(int row =0; row<9;row++){
                 if(board[row][col]!='.'){
                hash[board[row][col]-'0'] ++;
                if(hash[board[row][col]-'0']>1) return false;
                 }
            }
        }
        for(int i=0; i<9;i=i+3){
            for(int j=0; j<9; j=j+3 ){
                vector<int> hash(10,0);
                for(int row=i;row<i+3;row++){
                    for(int col=j; col<j+3;col++){
                        if(board[row][col]!='.'){
                        hash[board[row][col]-'0']++;
                        if(hash[board[row][col]-'0']>1) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};