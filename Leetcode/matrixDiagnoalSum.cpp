class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        int mid = size % 2 == 1 ? mat[size/2][size/2] : 0;
        int sum = 0;
        //count primary diagonal
        for(int i = 0; i < size; i++){
            sum += mat[i][i];
        }
        //count secondary diagonal
        int j = 0;
        for (int i = size - 1; i >= 0; i--) {
            sum += mat[j][i];
            j++;
        }
        sum -= mid;
        return sum;
    }
};

/*

0,0 1,1 2,2 0,2 1,1, 2,0
1 2 3
4 5 6
7 8 9

*/
