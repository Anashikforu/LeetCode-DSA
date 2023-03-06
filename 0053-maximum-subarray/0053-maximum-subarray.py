class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        msf,msr = -9999999999,0
        for n in nums:
            msr = max(n,msr+n)
            msf = max(msf,msr)
        
        return msf