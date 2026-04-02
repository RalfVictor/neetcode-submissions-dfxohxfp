class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r=0;r<9;r++){
            vector<int> ch(9,0);
            for(int i=0;i<9;i++){
                if(board[r][i]=='.') continue;
                if(ch[board[r][i]-1-'0']) return false;
                ch[board[r][i]-1-'0']++;
            }
        }
        for(int r=0;r<9;r++){
            vector<int> ch(9,0);
            for(int i=0;i<9;i++){
                if(board[i][r]=='.') continue;
                if(ch[board[i][r]-1-'0']) return false;
                ch[board[i][r]-1-'0']++;
            }
        }
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
