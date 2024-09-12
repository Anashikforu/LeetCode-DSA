class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        
        res = len(words)
        
        for word in words:
            
            wset = set(word)
            
            for ws in wset:
                if ws not in allowed:
                    res -= 1
                    break
        
        return res