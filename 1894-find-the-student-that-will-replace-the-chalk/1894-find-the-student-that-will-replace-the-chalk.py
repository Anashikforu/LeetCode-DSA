class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        
        res = 0
        
        k %= sum(chalk)
        
        for i,val in enumerate(chalk):
            if val > k:
                return i
            
            k -= val
        
        return res
                
        