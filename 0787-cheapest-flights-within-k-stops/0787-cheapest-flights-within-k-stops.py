class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        
        dp = [float('inf')]*n
        dp[src] = 0
        
        for _ in range(k+1):
            temp = dp[:]
            for f in flights:
                if dp[f[0]] != float('inf') :
                    temp[f[1]] = min(temp[f[1]], dp[f[0]] + f[2])
            dp = temp
        
        return dp[dst] if dp[dst] != float('inf') else -1 
        