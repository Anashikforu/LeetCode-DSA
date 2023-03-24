class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        
        edges = { (a,b) for a,b in connections }
        adj = [[] for i in range(n)]
        visited = set()
        changes = 0
        
        for a,b in connections:
            adj[a].append(b)
            adj[b].append(a)
        
        def dfs(city):
            nonlocal edges,adj,visited,changes
            
            for neighbors in adj[city]:
                if neighbors in visited:
                    continue
                if (neighbors,city) not in edges:
                    changes += 1
                visited.add(neighbors)
                dfs(neighbors)
        
        visited.add(0)
        dfs(0)
        
        return changes
        