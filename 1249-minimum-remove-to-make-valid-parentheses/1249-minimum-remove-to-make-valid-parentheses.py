class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        
        q,r = [],[]
        
        for index,val in enumerate(s):
            if val== '(':
                q.append(index)
            if val== ')':
                if len(q) > 0:
                    q.pop()
                else:
                    r.append(index)
        
        r += q
        
        res = ''
        
        for index,val in enumerate(s):
            if index not in r:
                res += val
        
        return res