class Solution:
    def countSubstrings(self, s: str) -> int:
        
        count = 0
        
        for i in range(len(s)+1):
            word = s[:i]
            for j in range(i):
                sword = word[-j:]
                if sword == sword[::-1]:
                    count += 1
        
        return count
        