class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int num = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1){
                    if(i == 0 || grid[i-1][j] == 0) num++; //up
                    if(j == 0 || grid[i][j-1] == 0) num++; //left
                    if(i == row - 1 || grid[i + 1][j] == 0) num++; //down
                    if(j == col - 1 || grid[i][j + 1] == 0) num++;//right
                }
            }
        }
        return num;
    }
};