class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rowSize = mat.size();
        int colSize = mat[0].size();
        int arrSize = arr.size();
        map<int, int> m;
        vector<int> rowCnt(rowSize, colSize);
        vector<int> colCnt(colSize, rowSize);
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++) {
                m[mat[i][j]] = i * colSize + j;
            }
        }

        for(int i = 0; i < arrSize; i++){
           int idx = m[arr[i]];
           int row = idx / colSize;
           int col = idx % colSize;
           rowCnt[row]--;
           if(rowCnt[row] <= 0) return i;
           colCnt[col]--;
           if(colCnt[col] <= 0) return i;
        }

        return arrSize;
    }
};
