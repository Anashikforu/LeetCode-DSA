class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        freq = {}
        for n in nums:
            if n not in freq:
                freq[n] = 0
            freq[n] += 1
        
        for x in freq:
            if freq[x] == 1:
                return x
        return 1