class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        postive , negative = [],[]
        for n in nums:
            if n<0:
                negative.append(n)
            else:
                postive.append(n)
            
        for i in range(len(nums)):
            if i%2==0:
                nums[i] = postive[int(i/2)]
            else:
                nums[i] = negative[int(i/2)]
        
        return nums
        