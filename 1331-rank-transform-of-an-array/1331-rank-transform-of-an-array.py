class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        
        nums = sorted(set(arr))
        numToRAnk = {}
        rank = 1
        for num in nums:
            numToRAnk[num] = rank
            rank += 1
        
        for i in range(len(arr)):
            arr[i] = numToRAnk[arr[i]]
        
        return arr