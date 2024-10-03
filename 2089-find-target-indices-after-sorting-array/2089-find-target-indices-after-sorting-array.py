class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        
        before, exact = 0,0
        
        for i,val in enumerate(nums):
            if val < target:
                before += 1
            elif val == target:
                exact += 1
        
        res = []
        for i in range(before,before+exact):
            res.append(i)
        
        return res