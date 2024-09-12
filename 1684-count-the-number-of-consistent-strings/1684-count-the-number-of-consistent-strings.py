class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        
        res = len(words)
        
        allowed_bit = 0
        
        for char in allowed:
            allowed_bit = allowed_bit | 1 << (ord(char) - ord("a"))
            
        for word in words:
            
            for char in word:
                bit = (allowed_bit >> (ord(char) - ord("a"))) & 1
                
                if not bit:
                    res -= 1
                    break
        
        return res