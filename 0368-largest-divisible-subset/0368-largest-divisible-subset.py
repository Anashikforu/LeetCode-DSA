class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        
        n_len = len(nums)
        
        if n_len == 0 :
            return nums
        
        nums.sort()
        
        dp = [1] * n_len
        ind = [-1] * n_len
        
        max_index = 0
        
        for i in range(n_len):
            for j in range(i):
                if nums[i]%nums[j] == 0 and dp[i] < dp[j]+1:
                    dp[i] = dp[j]+1
                    ind[i] = j
            if dp[i] > dp[max_index]:
                max_index = i
                    
        result = []
        while max_index != -1:
            result.append(nums[max_index])
            max_index = ind[max_index]
        
        return result[::-1]
                    
        