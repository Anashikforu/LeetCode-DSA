class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        
        in_count = [0] * (n+1)
        out_count = [0] * (n+1)
        
        for a,b in trust:
            in_count[a] += 1
            out_count[b] += 1
        
        for i in range(1,n+1):
            if in_count[i] == 0 and out_count[i] == n-1:
                return i
        
        return -1
        