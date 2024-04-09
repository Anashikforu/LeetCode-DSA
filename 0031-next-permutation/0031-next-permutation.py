class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        break_even = -1 #2154300
        shuffle_num = -1 
        
        num_len = len(nums) -1
        while num_len > 0:
            if(nums[num_len] > nums[num_len-1]):
                break_even = num_len-1
                break
            num_len -= 1
        
        
        if(break_even == -1):
            nums.reverse()
            return
        
        num_len = len(nums) -1
        while num_len > break_even:
            if(nums[num_len] > nums[break_even]):
                nums[num_len] , nums[break_even] = nums[break_even] , nums[num_len]
                shuffle_num = num_len
                break
            num_len -= 1
        
        split = break_even+1
        nums[split:] = nums[::-1][:len(nums)-split]
        
            
            
            
            
        
        
        