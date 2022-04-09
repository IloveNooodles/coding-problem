class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int max_sum = 0;
        int row = grid.length;
        int cols = grid[0].length;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < cols; j++){
                max_sum = Math.max(max_sum, countOnes(grid, i, j));
            }
        }
        return max_sum;
    }
    public int countOnes(int[][] grid, int i, int j){
        if(i < 0 || i >= grid.length || j < 0 || j >= grid[0].length) return 0;
        if(grid[i][j] == 0 || grid[i][j] == -1) return 0;
        int sum = 0;
        if(grid[i][j] == 1){
            grid[i][j] = -1; //mark as visited
            sum += 1;
        }
        sum += countOnes(grid, i-1,j);
        sum += countOnes(grid, i+1, j);
        sum += countOnes(grid, i, j + 1);
        sum += countOnes(grid, i, j - 1);
        return sum;
    }
}