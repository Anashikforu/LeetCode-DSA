class Solution {
public:
    int dfs(int i,int j,int island,vector<vector<char>>& grid,vector<vector<bool>> &visited){
        
        int n = grid.size(), m = grid[0].size();
        
        if(i >= n or i < 0){return island;}
        
        if(j >= m or j < 0){return island;}
        
        if(visited[i][j] == true){return island;}
        
        visited[i][j] = true;
        
        if(grid[i][j] == '1'){
            island = 1;
            dfs(i+1,j,island,grid,visited);
            dfs(i,j+1,island,grid,visited);
            dfs(i-1,j,island,grid,visited);
            dfs(i,j-1,island,grid,visited);
        }
            
        return island;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(),island  =0;
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j] == false){
                    island += dfs(i,j,0,grid,visited);
                }
            }
        }
        
        return island;
    }
};