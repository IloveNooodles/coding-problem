class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0;
        int right = col - 1;
        int i = 0;
        while(left <= right && i < row){
            int middle = left + (right - left) / 2;
            if(target == matrix[i][middle]) return true;
            else if(target > matrix[i][col - 1]){
                left = 0;
                right = col - 1;
                i++;
            }
            else if(target > matrix[i][middle]){
                left = middle + 1;
            }else right = middle - 1;
        }

        return false;
    }
};
