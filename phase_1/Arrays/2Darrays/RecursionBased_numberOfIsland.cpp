class Solution {
public:
    bool isValid(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
        if (i >= 0 && j >= 0 && i < n && j < m && grid[i][j] == '1' && !vis[i][j]) {
            return true;
        }

        return false;
    }

    void numIsIsland(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
        vis[i][j] = true;
        if (isValid(i + 1, j, n, m, grid, vis)) {
            numIsIsland(i + 1, j, n, m, grid, vis);
        }

        if (isValid(i - 1, j, n, m, grid, vis)) {
            numIsIsland(i - 1, j, n, m, grid, vis);
        }

        if (isValid(i, j + 1, n, m, grid, vis)) {
            numIsIsland(i, j + 1, n, m, grid, vis);
        }

        if (isValid(i, j - 1, n, m, grid, vis)) {
            numIsIsland(i, j - 1, n, m, grid, vis);
        }
    }


    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) {
            return 0;
        }

        int m = grid[0].size();
        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    ans++;
                    numIsIsland(i, j, n, m, grid, vis);
                }
            }
        }

        return ans;
    }
};

