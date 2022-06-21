class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> mat) {
        int rowSize = mat.size();
        int colSize = mat[0].size();
        int bound = rowSize + colSize;
        
        /* top left */
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                if(mat[i][j] == 0) continue; /* since distance 0 is 0 */
                int top = bound, left = bound;
                if(i > 0) top = mat[i-1][j];
                if(j > 0) left = mat[i][j-1];
                mat[i][j] = min(top, left) + 1;
            }
        }
        
        /* bottom right */
        for(int i = rowSize - 1; i >= 0; i--){
            for(int j = colSize - 1; j >= 0; j--){
                if(mat[i][j] == 0) continue;
                int bottom = bound, right = bound;
                if(i < rowSize - 1) bottom = mat[i + 1][j];
                if(j < colSize - 1) right = mat[i][j + 1];
                mat[i][j] = min(mat[i][j], min(bottom, right) + 1);
            }
        }
        return mat;
    }
};
