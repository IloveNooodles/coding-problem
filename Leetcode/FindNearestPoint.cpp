class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {    
        int size = points.size();
        int minIdx = -1;
        int minLen = 99999;
        for (int i = 0; i < size; i++) {
            if (isValidPoint(x, y, points[i])) {
                int curLen = manhattanDis({x, y}, points[i]);
                if(minLen > curLen){
                    minLen = curLen;
                    minIdx = i;
                }
            }
        }
        return minIdx;
    }
    
    bool isValidPoint(int x, int y, vector<int> point){
        return (point[0] == x || point[1] == y);
    }
    
    int manhattanDis(vector<int> point1, vector<int> point2) {
        return abs(point1[0] - point2[0]) + abs(point1[1] - point2[1]);
    }
};
