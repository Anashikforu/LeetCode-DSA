class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        
        find_1 = False
        length = len(nums)
        
        for i,num in enumerate(nums):
            if num == 1:
                find_1 = True
            if num <= 0 or num > length:
                nums[i] = 1
        
        if find_1 == False:
            return 1
        
        
        for i,num in enumerate(nums):
            value = abs(num)
            if value == length:
                nums[0] = -abs(nums[0])
            else:
                nums[value] = -abs(nums[value])
            
        
        for i in range(1,length):
            if nums[i] > 0:
                return i
        
        if nums[0] > 0:
            return length
        
        return length+1
                
                
        