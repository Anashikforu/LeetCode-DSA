class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
            
        res = 0
        adj = [[] for i in range(n)]
        
        for a,b in edges:
            adj[a].append(b)
            adj[b].append(a)
            
        def dfs(node, visited):
            if visited[node]:
                return 0

            visited[node] = True
            return 1 + sum(dfs(neighbor, visited) for neighbor in adj[node])
                    
        
  
        visited = [False]*n   
        
        sizes = [dfs(i, visited) for i in range(n)]

        return sum([sizes[i] * (n - sizes[i]) for i in range(n)]) // 2