class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        
        res = []
        
        for i,val in enumerate(words):
            if x in val:
                res.append(i)
        
        return res