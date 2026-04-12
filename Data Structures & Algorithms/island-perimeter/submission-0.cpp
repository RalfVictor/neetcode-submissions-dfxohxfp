class Solution {
public:
    int row,col;
    vector<vector<int>> grid;
    int dfs(int i,int j,vector<vector<bool>>& vis){
        if(i<0 || j<0 || j>=col || i>=row || grid[i][j]==0) return 1;
        if(vis[i][j]) return 0;
        vis[i][j] = true;
        return dfs(i,j+1,vis) + dfs(i,j-1,vis) + dfs(i+1,j,vis) + dfs(i-1,j,vis);
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        this->grid = grid;
        int ans = 0;
        row = grid.size();
        col = grid[0].size();
        vector<vector<bool>> vis(row,vector<bool>(col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1 && !vis[i][j])
                ans += dfs(i,j,vis);
            }
        }
        return ans;
    }
};