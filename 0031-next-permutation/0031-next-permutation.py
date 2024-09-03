class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        length = len(nums) -1
        dec = -1
		
        while length > 0:
            if nums[length] > nums[length-1]:
                dec = length-1
                break
            length -= 1
        
        spoint = dec
        if dec == -1:
            spoint = len(nums)-1
        else:
            for i in range(dec+1,len(nums)):
                if nums[i] > nums[dec]:
                    spoint = i
                else:
                    break
        
        print(dec,spoint)
                
        nums[dec],nums[spoint] = nums[spoint],nums[dec]
        
        dec += 1
        epoint = len(nums) - 1
        while(dec < epoint):
            nums[dec],nums[epoint] = nums[epoint],nums[dec]
            dec += 1
            epoint -= 1