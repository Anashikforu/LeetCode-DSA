class Solution:
    def check(self, nums: List[int]) -> bool:
        mini = min(nums)
        
        if len(nums)==1:
            return True
        
        temp = len(nums)
        
        for i in range(1,len(nums)):
            if(nums[i] <nums[i-1]) and nums[i] == mini:
                temp = i
                break
            elif nums[i] < nums[i-1] :
                return False
        
        for num in nums[temp:]:
            if num < mini:
                return False
            mini = num
        
        for num in nums[:temp]:
            if num < mini:
                return False
            mini = num
        
        return True
                