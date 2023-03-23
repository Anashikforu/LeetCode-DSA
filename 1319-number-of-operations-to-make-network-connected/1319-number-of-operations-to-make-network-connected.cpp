class Solution {
public:
    void dfs(unordered_map<int,vector<int>> &adj,vector<bool> &visited,int curr){

        visited[curr] = true;
        
        for(auto i:adj[curr]){
            if(visited[i] == false){
                dfs(adj,visited,i);
            }
        }
        
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        
        unordered_map<int,vector<int>> adj;
        int edge =connections.size();
        
        for(auto connection:connections){
            adj[connection[0]].push_back(connection[1]);
            adj[connection[1]].push_back(connection[0]);
        }
        
        
        vector<bool> visited(n,false);
        int component = 0;
        for(int i=0; i<n; i++){
            if (visited[i] == false){
                component++;
                dfs(adj,visited,i);
            }
        }
        
        if (edge < component -1 ){
            return -1;
        }
        
        int redundant = edge - ((n-1)-(component-1));
        
        if (redundant >= (component-1))
            return component-1;
        
        return -1;
    }
};