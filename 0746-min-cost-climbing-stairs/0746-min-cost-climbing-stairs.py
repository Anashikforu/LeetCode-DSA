class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        
        stack = [0]*len(cost)
        
        stack[0] = cost[0]
        stack[1] = cost[1]
        # stack[2] = min(cost[1],cost[0]+co)
        
        for i in range(2,len(cost)):
            stack[i] = min(stack[i-1],stack[i-2]) + cost[i]
        
        # print(stack)
        
        return min(stack[-1],stack[-2])
            
        