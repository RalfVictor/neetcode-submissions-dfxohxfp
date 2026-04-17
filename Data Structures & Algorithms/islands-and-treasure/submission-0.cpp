class Solution {
public:
    int n, m;
    void dfs(int i, int j, vector<vector<int>>& grid, int dist) {
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == -1) return;
        if(grid[i][j] < dist) return;
        grid[i][j] = dist;
        dfs(i+1, j, grid, dist+1);
        dfs(i-1, j, grid, dist+1);
        dfs(i, j+1, grid, dist+1);
        dfs(i, j-1, grid, dist+1);
    }

    void islandsAndTreasure(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 0) {
                    dfs(i, j, grid, 0);
                }
            }
        }
    }
};
