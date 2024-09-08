class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        
        m,n = len(obstacleGrid), len(obstacleGrid[0])
        
        dp = [[0]*n for _ in range(m)]
        if obstacleGrid[0][0] == 1:
            dp[0][0] = 0
        else:
            dp[0][0] = 1
            
        
        for i in range(1,n):
            if obstacleGrid[0][i] != 1:
                dp[0][i] = dp[0][i-1]
        
        for i in range(1,m):
            for j in range(n):
                if obstacleGrid[i][j] != 1:
                    if j ==0:
                        dp[i][j] = dp[i-1][j]
                    else:
                        dp[i][j] = dp[i-1][j] +dp[i][j-1]
        # print(dp)
        return dp[m-1][n-1]
                    
        