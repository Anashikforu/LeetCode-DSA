class Solution {
public:
    bool isCycle(int s,  vector < bool > &visited, vector < bool > &dfsvisited,vector < int > adj[]) {
        visited[s] = 1;
        dfsvisited[s] = 1;
        for(auto a: adj[s]){
            if(!visited[a]){
                if(isCycle(a,visited,dfsvisited,adj)){return true;}
            }else if(dfsvisited[a]){
                return true;
            }
            
        }
        dfsvisited[s] = 0;
        return false;
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        
        vector<int> adj[numCourses];
        for(int i = 0; i<prerequisites.size(); ++i){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
        }
        
        vector<bool> visited(numCourses,0);
        vector<bool> dfsvisited(numCourses,0);
        
        for(int i=0; i<numCourses; i++){
            if(!visited[i]){
                if(isCycle(i,visited,dfsvisited,adj)){
                    return false;
                }
            }
        }
        
        return true;
    }
};