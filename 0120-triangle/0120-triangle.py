class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        n = len(triangle)
        dp = [[triangle[0][0]]]
        
        
        for i in range(1,n):
            row = [float(inf)]*(i+1)
            dp.append(row)
            for j in range(i+1):
                if j == 0:
                    dp[i][j] = dp[i-1][j] + triangle[i][j]
                elif j == i:
                    dp[i][j] = dp[i-1][j-1] + triangle[i][j]
                else:
                    dp[i][j] = min(dp[i-1][j],dp[i-1][j-1]) + triangle[i][j]
        
        # print(dp)
        return min(dp[-1])