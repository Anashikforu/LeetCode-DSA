class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        num_dic = {}
        for n in nums:
            if n not in num_dic:
                num_dic[n] = 0
            num_dic[n] += 1
        
        return max(zip(num_dic.values(), num_dic.keys()))[1]
        