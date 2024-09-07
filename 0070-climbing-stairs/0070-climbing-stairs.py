class Solution:
    def climbStairs(self, n: int) -> int:
        
        stairs = [0]*(n+1)
        stairs[1] = 1
        if n <= 1:
            return stairs[n]
        stairs[2] = 2
        
        for i in range(3,n+1):
            # print(stairs[i])
            stairs[i] = stairs[i-1]+stairs[i-2]
            # print(stairs[i])
        
        return stairs[n]
        