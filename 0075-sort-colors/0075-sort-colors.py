class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        color = {0: 0, 1: 0, 2: 0}
        
        for n in nums:
            color[n] += 1
        
        ind =0
        for c in color:
            for col in range(color[c]):
                nums[ind] = c
                ind += 1
            
            
        
        