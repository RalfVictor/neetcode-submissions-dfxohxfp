class Solution {
public:
    int n,m;
    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
        vis[i][j] = 1;
        int r[4] = {-1,0,1,0};
        int c[4] = {0,1,0,-1};
        int ans = 0;
        for(int k=0;k<4;k++){
            int nr = i+r[k];
            int nc = j+c[k];
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==-1){
                ans+=dfs(nr,nc,grid,vis);
            }
        }
        return ans+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==-1){
                    ans = max(ans,dfs(i,j,grid,vis));
                    cout<<ans<<" ";
                }
            }
        }
        return ans;
    }
};
