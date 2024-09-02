class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        
        res = []
        
        if m*n != len(original):
            return res
        
        temp = []
        
        for i,val in enumerate(original):
            
            if i !=0 and i% n == 0:
                res.append(temp)
                temp = []
            
            temp.append(val) 
            
        res.append(temp)
        
        return res
        