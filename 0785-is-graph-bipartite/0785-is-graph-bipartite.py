class Solution:
    
    def isBipartite(self, graph: List[List[int]]) -> bool:
        
        visited = [-1]*len(graph);
        
        def dfs(i,visited) -> bool:
            
            if visited[i] == -1:
                visited[i] = 1
            
            for u in graph[i]:
                if visited[u] == -1:
                    visited[u] = 1-visited[i]
                    if(dfs(u,visited) == False):
                        return False
                elif visited[u] == visited[i]:
                    return False
            
            return True
        
        for i in range(len(graph)):
            if visited[i] == -1:
                if(dfs(i,visited) == False):
                    return False
        
        return True
        