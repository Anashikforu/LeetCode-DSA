class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy , sell = 999999999999,0
        for n in prices:
            buy = min(buy,n)
            sell = max(sell,n-buy)
        
        return sell
        