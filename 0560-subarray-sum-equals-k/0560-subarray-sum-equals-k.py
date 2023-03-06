class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res = 0
        sum_dic = {0:1}
        temp = 0
        for n in nums:
            temp += n
            if temp-k in sum_dic:
                res += sum_dic[temp-k]
            if temp not in sum_dic:
                sum_dic[temp] = 0
            sum_dic[temp] += 1
        
        return res
            