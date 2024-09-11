class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        
        startB = str(format(int(start), 'b'))
        goalB = str(format(int(goal), 'b'))
        res = 0
        
        gap = abs(len(startB) - len(goalB))
        
        n = max(len(goalB),len(startB))
        
        # print(goalB ,startB)
        goalB ,startB = goalB[::-1],startB[::-1]
        # print(goalB ,startB)
        
        for i in range(n-gap):
            if goalB[i] != startB[i]:
                res += 1
        greater = goalB
        if len(goalB) < len(startB):
            greater = startB
        for i in range(n-gap,n):
            if greater[i] != '0':
                res += 1
        
        return res
        