class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> temp(n,0);
        for(auto it:trust){
            temp[it[0]-1]--;
            temp[it[1]-1]++;
        }
        for(int i=0;i<n;i++){
            if(temp[i]==n-1) return i+1;
        }
        return -1;
    }
};