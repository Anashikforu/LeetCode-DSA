class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        
        def dfs(row,col,memo):
            
            if row == m-1 and col == n-1:
                return 1
                
            if row >= m or col >= n:
                return 0
            
            if memo[row][col] != -1:
                return memo[row][col]
            
            memo[row][col] = dfs(row+1,col,memo)+dfs(row,col+1,memo)
            
            return memo[row][col]
        
        memo = [[-1]*n for _ in range(m)]
        
        return dfs(0,0,memo)
                
            
        