class Solution:
    def findAllPeople(self, n: int, meetings: List[List[int]], firstPerson: int) -> List[int]:
        
        graph = defaultdict(list)
        for x,y,t in meetings:
            graph[x].append([y,t])
            graph[y].append([x,t])
            
        visited = [inf]*n
        visited[0] = 0
        visited[firstPerson] = 0
        
        queue = deque()
        queue.append((0,0))
        queue.append((firstPerson,0))
        
        while queue:
            person,time = queue.popleft()
            for np,t in graph[person]:
                if t >= time and visited[np] > t:
                    visited[np] = t
                    queue.append((np,t))
                    
        return [i for i in range(n) if visited[i] != inf]