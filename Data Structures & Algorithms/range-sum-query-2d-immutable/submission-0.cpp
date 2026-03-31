class NumMatrix {
public:
    vector<vector<int>> sum_map;
    NumMatrix(vector<vector<int>>& matrix) {
      
      for (int i=0; i< matrix.size()+1;i++){
        vector<int> v(matrix[0].size()+1);
        sum_map.push_back(v);
      }
      for (int r=0; r<matrix.size();r++){
        int prefix=0;
        for(int c=0; c<matrix[0].size();c++){
            prefix = prefix + matrix[r][c];
            int above = sum_map[r][c+1];     
            sum_map[r+1][c+1] = prefix + above;
      }
    }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        return sum_map[row2][col2]-sum_map[row1-1][col2]-sum_map[row2][col1-1]+sum_map[row1-1][col1-1];
    
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */