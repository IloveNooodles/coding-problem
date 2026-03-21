class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int reflectX = x + k - 1;
        while(x < reflectX){
            int curY = y, ctr = 0;
            while(ctr < k){
                int temp = grid[reflectX][curY];
                grid[reflectX][curY] = grid[x][curY];
                grid[x][curY] = temp;
                curY++;
                ctr++;
            }

            x++;
            reflectX--;
        }

        return grid;
    }
}
