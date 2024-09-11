class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        res = 0
        xor = start ^ goal
        
        while xor:
            xor &= (xor -1)
            res += 1
        
        return res
        