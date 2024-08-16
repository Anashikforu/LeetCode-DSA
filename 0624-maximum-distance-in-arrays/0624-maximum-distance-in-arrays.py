class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        
        mini , maxi = arrays[0][0],arrays[0][-1]
        res = 0
        
        for i,arr in enumerate(arrays):
            if i==0:
                continue
                
            cur_min = arr[0]
            cur_max = arr[-1]
            
            res = max(res, max(abs(cur_max-mini),abs(cur_min-maxi)))

            mini = min(cur_min,mini)
            maxi = max(cur_max,maxi)
        
        
        return res
            
        