class Solution {
public:
    int n;
    int m;
    void dfs(int i,int j, vector<vector<int>>& vis,vector<vector<char>>& grid){
        vis[i][j] = 1;
        int r[4] = {0,-1,0,1};
        int c[4] = {1,0,-1,0};
        for(int k=0;k<4;k++){
            int nr = i+r[k];
            int nc = j+c[k];
            if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==-1 && grid[nr][nc]=='1')
            dfs(nr,nc,vis,grid);
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==-1){
                    dfs(i,j,vis,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};
