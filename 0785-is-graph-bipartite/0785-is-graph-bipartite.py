class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int> &visited){
        
        if(visited[node] == -1){visited[node] = 1;}
        
        for(auto it:graph[node]){
            if(visited[it] == -1){
                visited[it] = 1- visited[node];
                if(!dfs(it,graph,visited)){
                    return false;
                }
            }else if(visited[it] == visited[node]){
                return false;
            }
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int maxV = graph.size();
    
        vector<int> visited(maxV,-1);
        
        for(int i=0; i<maxV; i++){
            if(visited[i] == -1){
                if(!dfs(i,graph,visited)){
                    return false;
                }
            }
        }
        
        
        return true;
        
    }
};