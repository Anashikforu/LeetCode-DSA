class Solution:
        
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        
        if n - 1 > len(connections):
            return -1
        
        adj = [[] for i in range(n)]
        edge = len(connections)
        
        for connection in connections:
            adj[connection[0]].append(connection[1])
            adj[connection[1]].append(connection[0])
        
        visited = [False for i in range(n)]
        components = 0
                
        def dfs(adj,curr,visited):
        
            visited[curr] = True

            for i in adj[curr]:
                if visited[i] == False:
                    dfs(adj,i,visited)
    
        for i in range(n):
            if visited[i] == False:
                components += 1
                dfs(adj,i,visited)
        
        return components - 1
        