class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        
        cur_sum = sum(rolls)
        total_sum = mean*(n+len(rolls))
        
        res = total_sum-cur_sum
        
        if res > 6*n or res < n:
            return []
        
        disMean = res/n
        res %= n
        
        nEle = [int(disMean)]*n
      
        
        for i in range(res):
            nEle[i] += 1
        
        return nEle
        
        
        