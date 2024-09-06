class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        
        cur_sum = sum(rolls)
        total_sum = mean*(n+len(rolls))
        
        res = total_sum-cur_sum
        
        if res > 6*n or res < n:
            return []
        
        disMean = res/n
        res %= n
        print(res)
        nEle = [int(disMean)]*n
        index = 0
        
        
        while res > 0:
            nEle[index] += 1
            
            res -= 1
            index += 1
            if index == n:
                index = 0
        
        return nEle
        
        
        