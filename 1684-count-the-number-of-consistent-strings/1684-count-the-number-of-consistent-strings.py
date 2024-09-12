class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        
        res = 0
        
        allowed_bit = 0
        
        for char in allowed:
            allowed_bit = allowed_bit | 1 << (ord(char) - ord("a"))
            
        for word in words:
            
            is_consistent = True
            
            for char in word:
                bit = (allowed_bit >> (ord(char) - ord("a"))) & 1
                
                if not bit:
                    is_consistent = False
                    break
            
            if is_consistent == True:
                res += 1
        
        return res