class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rottenIndex;
        int fresh_oranges = 0;
        int rowSize = grid.size();
        int colSize = grid[0].size();
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                if(grid[i][j] == 2) rottenIndex.push(make_pair(i, j));
                if(grid[i][j] == 1) fresh_oranges++;
            }
        }
        
        /* if no fresh oranges */
        if(fresh_oranges == 0) return 0;
        int count = 0;
        
        vector<pair<int, int>> direction{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while(!rottenIndex.empty()) {
            count++;
            int size = rottenIndex.size();
            for(int i = 0; i < size; i++){
                pair<int, int> currentPosition = rottenIndex.front();
                rottenIndex.pop();
                for(auto p : direction){
                    int x = currentPosition.first + p.first;
                    int y = currentPosition.second + p.second;
                    if(x < 0 || x >= rowSize || y < 0 || y >= colSize || grid[x][y] == 0 || grid[x][y] == 2) continue;
                    grid[x][y] = 2;
                    /* insert the new rotten oranges */
                    rottenIndex.push(make_pair(x, y));
                    fresh_oranges--;
                }
            }
        }
        return fresh_oranges == 0 ? count - 1 : -1;
    }
};
