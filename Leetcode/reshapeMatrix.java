class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int[][] res = new int[r][c];
        int cntElmt = 0;
        int rowLen = mat.length;
        int colLen = mat[0].length;
        if (r * c != rowLen * colLen) {
            return mat;
        }
        
        int rowCol = 0, curCol = 0;
        for(int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (curCol == c) {
                    rowCol++;
                    curCol = 0;
                }
                res[rowCol][curCol] = mat[i][j];
                curCol++;
            }
        }
        return res;
    }
}
