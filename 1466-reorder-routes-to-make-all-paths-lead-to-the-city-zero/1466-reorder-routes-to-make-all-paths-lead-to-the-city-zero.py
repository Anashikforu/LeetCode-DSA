class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        
        edges = { (a,b) for a,b in connections}
        adj = { city:[] for city in range(n)}
        changes = 0
        visited = set()
        
        for a,b in connections:
            adj[a].append(b)
            adj[b].append(a)
        
        def dfs(city):
            nonlocal edges, adj, changes, visited
            
            for n in adj[city]:
                if n in visited:
                    continue
                if (n,city) not in edges:
                    changes += 1
                visited.add(n)
                dfs(n)
        
        visited.add(0)
        dfs(0)
        
        return changes
        