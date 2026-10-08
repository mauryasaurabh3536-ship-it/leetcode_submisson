class Solution {
public:
    bool check(int i, int j, int n, vector<string>&board){
        int row=i;
        int col=j;
        while(row>-1 && col>-1){
            if(board[row][col]=='Q') return 0;
            row--;
            col--;
        }
        row=i, col=j;
        while(row>-1 && col<n){
            if(board[row][col]=='Q') return 0;
            row--;
            col++;
        }
        return 1;
    }
    void find(int row, int n,vector<vector<string>>& ans,vector<string>& board,vector<bool>& column){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(column[j]==0 && check(row,j,n,board)){
                column[j]=1;
                board[row][j]='Q';
                find(row+1,n,ans,board,column);
                column[j]=0;
                board[row][j]='.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<bool>column(n,0);
        vector<string> board(n,string(n,'.'));
        find(0,n,ans,board,column);
        return ans;
    }
};