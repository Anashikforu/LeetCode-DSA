class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        res,l,r = 0,0,len(mat)-1
        
        for col in mat:
            res += col[l]
            if l != r:
                res += col[r]
            l += 1
            r -= 1
        
        return res
        