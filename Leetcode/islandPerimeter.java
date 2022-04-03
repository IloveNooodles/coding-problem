class Solution {
  public int islandPerimeter(int[][] grid) {
    int row = grid.length;
    int col = grid[0].length;
    // cari yang land
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        if (grid[i][j] == 1)
          return countPerimeter(grid, i, j);
      }
    }
    return -1;
  }

  public int countPerimeter(int[][] grid, int row, int col) {
    if (row < 0 || row >= grid.length || col < 0 || col >= grid[0].length || grid[row][col] == 0)
      return 1;

    // mark as visited
    if (grid[row][col] == -1)
      return 0;
    grid[row][col] = -1;

    int count = 0;

    count += countPerimeter(grid, row - 1, col);
    count += countPerimeter(grid, row + 1, col);
    count += countPerimeter(grid, row, col - 1);
    count += countPerimeter(grid, row, col + 1);

    return count;
  }
}