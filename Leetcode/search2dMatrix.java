class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rowLen = matrix.length;
        int colLen = matrix[0].length - 1;
        int startRow = 0;
        while(startRow < rowLen) {
            if (colLen < 0) return false;
            if (target == matrix[startRow][colLen]) return true;
            if (target > matrix[startRow][colLen]) {
                startRow++;
            } else colLen--;
            
        }
        return false;
    }
}
