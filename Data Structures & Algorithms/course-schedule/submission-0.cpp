class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> temp(n,0);
        vector<vector<int>> adj(n);
        int ch = 0;
        for(auto it:pre){
            adj[it[1]].push_back(it[0]);
            temp[it[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(temp[i]==0) {q.push(i);ch++;}
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                temp[it]--;
                if(temp[it]==0){
                    q.push(it);
                    ch++;
                }
            }
        }
        if(ch==n) return true;
        return false;
    }
};
