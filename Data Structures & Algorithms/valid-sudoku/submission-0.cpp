class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        vector<unordered_set<char>> row(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
                    if(row[i].contains(board[i][j])) return false;
                    else row[i].insert(board[i][j]);
                }
            }
        }
        vector<unordered_set<char>> col(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]!='.'){
                    if(col[i].contains(board[j][i])) return false;
                    else col[i].insert(board[j][i]);
                }
            }
        }
        vector<unordered_set<char>> boards(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
                    int r = i/3;
                    int c = j/3;
                    int mat = 3*r+c; 
                    if(boards[mat].contains(board[i][j])) return false;
                    else boards[mat].insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
