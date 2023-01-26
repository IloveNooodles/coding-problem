class NumMatrix {
public:
    vector<vector<int>> prefSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = rowSize > 0 ? matrix[0].size() : 0;
        /* dibuat plus 1 biar diisi dummy 0 */
        vector<vector<int>> prefixSum(rowSize + 1, vector<int>(colSize + 1, 0));
        for (int i = 1; i <= rowSize; i++) {
            for (int j = 1; j <= colSize; j++) {
                prefixSum[i][j] = prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1] + matrix[i-1][j-1];
            }
        }
        this->prefSum = prefixSum;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return this->prefSum[row2+1][col2+1] - this->prefSum[row2 + 1][col1] - this->prefSum[row1][col2 + 1] + this->prefSum[row1][col1];
    }
};
