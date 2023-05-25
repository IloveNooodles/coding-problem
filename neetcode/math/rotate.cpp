class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reflect(matrix);
    }

    void transpose(vector<vector<int>> &matrix){
        int size = matrix.size();
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    void reflect(vector<vector<int>> &matrix){
        int size = matrix.size();
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size / 2; j++){
                int temp = matrix[i][size - 1 - j];
                matrix[i][size - 1 - j] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
};
