class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        res = 0
        xor = start ^ goal
        
        while xor:
            res += xor & 1
            xor >>= 1
        
        return res
        