class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int rowSize = mat.size();
        int colSize = mat[0].size();

        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                int mult = 1;
                if(i % 2 == 0){
                    mult *= -1;
                }
                int shifted = j + k * mult;
                shifted = (colSize + (shifted % colSize)) % colSize;
                if(mat[i][shifted] != mat[i][j]) return false;
            }
        }

        return true;
    }
};
