class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        
        m,n = len(grid),len(grid[0])
        path = [[-1]*n]*m
        
        for i in range(0,m):
            for j in range(0,n):
                if i == 0 and j == 0:
                    path[i][j] = grid[i][j]
                elif i == 0:
                    path[i][j] = path[i][j-1]+grid[i][j]
                elif j == 0:
                    path[i][j] = path[i-1][j]+grid[i][j]
                else:
                    path[i][j] = min(path[i-1][j],path[i][j-1])+grid[i][j]
        
        
        return path[m-1][n-1]
        
            
            
            
        