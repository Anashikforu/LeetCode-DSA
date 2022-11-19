class Solution {
public:
    bool isCycle(int n,vector<int> adj[],vector<int> &visited){
        
        if(visited[n] == 1){
            return true;
        }
        
        if(visited[n] == 0){
            visited[n] = 1;

            for(auto it:adj[n]){
                if(isCycle(it,adj,visited)){
                    return true;
                }
            }
        }
        
        visited[n] = 2;
        
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> visited(numCourses,0);
        
        vector<int> adj[numCourses];
        
        for(auto a:prerequisites){
            adj[a[1]].push_back(a[0]);
        }
        
        for(int i=0; i<numCourses; i++){
            if(isCycle(i,adj,visited)){
                return false;
            }
        }
        
        return true;
    }
};