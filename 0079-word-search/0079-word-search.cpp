class Solution {
public:
    bool search(int ind,int i,int j,vector<vector<char>>& board, string word){
        if(ind >= word.size()){return true;}
        
        if(i<0 || i>=board.size() ){return false;}
        
        if(j<0 || j>=board[i].size() || board[i][j] != word[ind]){return false;}
        
        board[i][j] = '0';
        
        if(search(ind+1,i+1,j,board,word)==true){return true;}
        
        if(search(ind+1,i-1,j,board,word)==true){return true;}
        
        if(search(ind+1,i,j+1,board,word)==true){return true;}
        
        if(search(ind+1,i,j-1,board,word)==true){return true;}
        
        board[i][j] = word[ind];
        
        return false;
     
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0; i<board.size(); i++){
			for(int j=0; j<board[0].size(); j++){
				if(board[i][j] == word[0] && search(0,i,j,board, word)){
					return true;
				}
			}
		}
		return false;
  
    }
};