class Solution {
public:
    void solutionNQueens(vector<vector<string>> &results,vector<int> topLeft,vector<int> rightDiagonal,vector<int> leftDiagonal,vector<string> &board,int row,int n){
        if(row == n){
            results.push_back(board);
            return;
        }
        
        for(int col=0; col<n; col++){
            if(topLeft[col] == 0 and rightDiagonal[col+row] == 0 and leftDiagonal[n-1+row-col] == 0){
                board[col][row] = 'Q';
                topLeft[col] = 1;
                rightDiagonal[col+row ] = 1;
                leftDiagonal[n-1+row-col] = 1;
                solutionNQueens(results,topLeft,rightDiagonal,leftDiagonal,board,row+1,n);
                board[col][row] = '.';
                topLeft[col] = 0;
                rightDiagonal[col+row] = 0;
                leftDiagonal[n-1+row-col ] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> results;
        vector<int> topLeft(n,0), rightDiagonal(2*n-1,0), leftDiagonal(2*n-1,0);
        vector<string> board;
        string s(n,'.');
        for(int i=0; i<n; i++){
            board.push_back(s);
        }
        
        solutionNQueens(results,topLeft,rightDiagonal,leftDiagonal,board,0,n);
        
        return results;
        
    }
};