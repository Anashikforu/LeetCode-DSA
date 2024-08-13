class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        ans = []
        
        def dfs(index, n_target , cm_list):
            if n_target == 0:
                ans.append(cm_list)
                return 
            
            for i in range(index,len(candidates)):
                if i > index and candidates[i] == candidates[i - 1]:
                    continue
                if(candidates[i] > n_target):
                    break
                dfs(i+1,n_target-candidates[i],cm_list+[candidates[i]])
                    
                    
        dfs(0, target , [])
        
        return ans
                