class Solution:
    def check(self, nums: List[int]) -> bool:
        bp = 0
        temp = nums[0]
        
        for num in nums:
            if num < temp and bp > 1:
                return False
            if num < temp:
                bp += 1
            temp = num
        
        for num in nums:
            if num < temp and bp > 1:
                return False
            if num < temp:
                bp += 1
            temp = num
        
        return True
        