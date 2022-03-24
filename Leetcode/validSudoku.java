class Solution {
    public boolean isValidSudoku(char[][] board) {
        //traverse row
        for (int i = 0; i < 9; i++) {
            HashMap<Character, Integer> m = new HashMap<>();
            int rowIdx = 0;
            while (rowIdx < 9) {
                System.out.print(board[rowIdx][i]);
                if (m.containsKey(board[rowIdx][i]) && board[rowIdx][i] != '.') {
                    return false;
                }
                m.put(board[rowIdx][i], 1);
                rowIdx++;
            }
            System.out.println();
        }
        System.out.println("newline");
        //traverse col
        for (int i = 0; i < 9; i++) {
            HashMap<Character, Integer> m = new HashMap<>();
            int colIdx = 0;
            while (colIdx < 9) {
                System.out.print(board[i][colIdx]);
                if (m.containsKey(board[i][colIdx]) && board[i][colIdx] != '.') {
                    System.out.print(board[i][colIdx]);
                    return false;
                }
                m.put(board[i][colIdx], 1);
                colIdx++;
            }
            System.out.println();
        }
        //box 3 x 3 col
        System.out.println();
        for (int i = 0; i < 3; i++) {
            int row = i*3;
            for (int j = 0; j < 3; j++) {
                HashMap<Character, Integer> m = new HashMap<>();
                int count = 0;
                int col = j*3;
                while (count < 9) {
                    System.out.print(board[row][col]);
                    if (m.containsKey(board[row][col]) && board[row][col] != '.') {
                        return false;
                    }
                    m.put(board[row][col], 1);
                    col++;
                    count++;
                    if(col % 3 == 0 && col > 0) {
                        row++;
                        col = j*3;
                    }
                    if(row % 3 == 0 && row > 0) {
                        row = i * 3;
                    }
                }
                System.out.println();
            }
            System.out.println();
        }
        return true;
    }
}
