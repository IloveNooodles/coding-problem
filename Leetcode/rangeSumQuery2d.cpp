class NumMatrix {
public:
    vector<vector<int>> prefSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<vector<int>> prefixSum(rowSize, vector<int>(colSize, 0));
        for (int i = 0; i < rowSize; i++) {
            int sum = 0;
            for (int j = 0; j < colSize; j++) {
                sum += matrix[i][j];
                prefixSum[i][j] = sum;
            }
        }
        this->prefSum = prefixSum;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2; i++){
            int toSubtract = col1 - 1 < 0 ? 0 : this->prefSum[i][col1-1];
            sum += this->prefSum[i][col2] - toSubtract;
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
