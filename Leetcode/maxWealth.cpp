class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = -1;
        int rowSize = accounts.size();
        int colSize = accounts[0].size();
        for(int i = 0; i < rowSize; i++) {
            int curSum = 0;
            for(int j = 0; j < colSize; j++) {
                curSum += accounts[i][j];
            }
            maxWealth = max(maxWealth, curSum);
        }
        return maxWealth;
    }
};
