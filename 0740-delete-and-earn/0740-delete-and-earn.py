class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        
        summation = [0]*10002
        
        maxi = max(nums)
        
        for num in nums:
            summation[num] += num
            
        for i in range(2,maxi+1):
            summation[i] = max(summation[i]+summation[i-2],summation[i-1])
        
        
        return summation[maxi]
        
        
        