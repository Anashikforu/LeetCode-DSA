//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfstrversal(int i,vector<int> adj[],vector<bool> &visited,vector<int> &bfs){
        queue<int> pq;
        pq.push(i);
        
        while(!pq.empty()){
            int top = pq.front();
            pq.pop();
            if(!visited[top]){
                visited[top] = 1;
                bfs.push_back(top);
                
                for(int x=0; x<adj[top].size(); x++){
                    pq.push(adj[top][x]);
                }
            }
        }
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,0);
        vector<int> bfs;
        // for(int i=0; i<V; i++){
        //     if(!visited[i]){
        bfstrversal(0,adj,visited,bfs);
        //     }
        // }
        
        return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends