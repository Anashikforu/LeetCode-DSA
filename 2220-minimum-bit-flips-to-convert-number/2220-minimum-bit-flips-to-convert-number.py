class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        
        startB = str(format(int(start), 'b'))
        goalB = str(format(int(goal), 'b'))
        res = 0
        
        gap = abs(len(startB) - len(goalB))
        
        n = max(len(goalB),len(startB))
        
        greater , lesser = goalB , startB
        
        if len(goalB) < len(startB):
            greater , lesser = startB , goalB
            
        for i in range(gap):
            if greater[i] != '0':
                res += 1
        
        for i in range(n-gap):
            if greater[i+gap] != lesser[i]:
                res += 1
        
        return res
        