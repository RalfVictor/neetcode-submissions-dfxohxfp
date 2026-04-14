class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,pair<int,int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,-1));
        int count = 0;
        int rot = 0;
        int fresh = 0;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({0,{i,j}});
                    vis[i][j] = 1;
                    rot++;
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh+rot==0) return 0;
        int t = 1;
        while(!q.empty()){
            t = q.front().first;
            int r = q.front().second.first;
            int c = q.front().second.second;
            count++;
            q.pop();
            int row[4] = {-1,0,1,0};
            int col[4] = {0,-1,0,1};
            for(int i=0;i<4;i++){
                int nr = r+row[i];
                int nc = c+col[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==-1){
                    q.push({t+1,{nr,nc}});
                    vis[nr][nc] = 1;
                }
            }
        }
        if(count==fresh+rot)
        return t;
        return -1;
    }
};
