class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, vector<vector<int>>&v, int ind, int x, int y){
		if(ind==word.size()-1){return true;}
		v[x][y]=1;
		if(x>0 && !v[x-1][y] && board[x-1][y]==word[ind+1] && dfs(board, word, v, ind+1, x-1, y)){
			return true;
		}
		if(y>0 && !v[x][y-1] && board[x][y-1]==word[ind+1] && dfs(board, word, v, ind+1, x, y-1)){
			return true;
		}
		if(x<board.size()-1 && !v[x+1][y] && board[x+1][y]==word[ind+1] && dfs(board, word, v, ind+1, x+1, y)){
			return true;
		}
		if(y<board[0].size()-1 && !v[x][y+1] && board[x][y+1]==word[ind+1] && dfs(board, word, v, ind+1, x, y+1)){
			return true;
		}
		v[x][y]=0;
		return false;
	}
	bool exist(vector<vector<char>>& board, string word) {
		//queue<pair<pair<pair<int, int>, int>, vector<vector<int>>>>q;
		vector<vector<int>>v(board.size(), vector<int>(board[0].size(), 0));
		for(int i=0; i<board.size(); i++){
			for(int j=0; j<board[0].size(); j++){
				if(board[i][j]==word[0] && dfs(board, word, v, 0, i, j)){
					return true;
				}
			}
		}
		return false;
	}
};