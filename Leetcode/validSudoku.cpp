class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0}, col[9][9] = {0}, box[9][9] = {0};
        int rowlen = board.size();
        int collen = board[0].size();
        for (int i = 0; i < rowlen; i++) {
            for (int j = 0; j < collen; j++) {
                if (board[i][j] == '.') continue;
                int num = board[i][j] - '0' - 1;
                int boxIdx = (i/3) * 3 + j/3;
                if (row[i][num] || col[j][num]  || box[boxIdx][num]) {
                    return false;
                }
                row[i][num] = col[j][num] = box[boxIdx][num] = 1;
            }
        }
        return true;
    }
};
