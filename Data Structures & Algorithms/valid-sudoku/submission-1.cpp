class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_map<int, unordered_set<char>> rows;
       unordered_map<int, unordered_set<char>> cols;
       map<pair<int, int>, unordered_set<char>> squares;

       for(int r=0; r<board.size(); r++){
        for(int c=0; c<board[0].size(); c++){
            int n = board[r][c];
            if(n!='.'){
            if(rows[r].count(n)||cols[c].count(n)||squares[{r/3,c/3}].count(n)) return false;
            else{
                rows[r].insert(n);
                cols[c].insert(n);
                squares[{r/3, c/3}].insert(n);
            }
            }
        }
       }
       return true;

    }
};