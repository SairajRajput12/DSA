class Solution {
    private boolean solve(char[][] board, int i, int j, int n, int m, int k, String word) {
        if (k >= word.length()) {
            return true;
        }

        if (i < 0 || j < 0 || board[i][j] == '.' || i >= n || j >= m || word.charAt(k) != board[i][j]) {
            return false;
        }

        if (word.length() == 1 && board[i][j] == word.charAt(k)) {
            return true;
        }

        char original = board[i][j];
        board[i][j] = '.'; // Mark the cell as visited

        int[] x = {0, 0, -1, 1};
        int[] y = {-1, 1, 0, 0};
        boolean found = false;
        for (int index = 0; index < 4; index++) {
            int newX = i + x[index]; // index out of bound exception milu shkato
            int newY = j + y[index];
            
            if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
                found = found || solve(board, newX, newY, n, m, k + 1, word);
            }
        }

        board[i][j] = original; // Restore the cell
        return found;
    }

    public boolean exist(char[][] board, String word) {
        int n = board.length;
        if (n == 0) return false;

        int m = board[0].length;
        if (m == 0) return false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word.charAt(0) && solve(board, i, j, n, m, 0, word)) {
                    return true;
                }
            }
        }

        return false;
    }
}

