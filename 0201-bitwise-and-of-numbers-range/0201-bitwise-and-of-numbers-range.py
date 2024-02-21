class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        
        diff = 0
        
        while left != right:
            left >>= 1
            right >>= 1
            diff += 1
        
        
        return left << diff
            
        