//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfstrversal(int n,vector<int> adj[],vector<bool> &visited,vector<int> &bfs){
        visited[n] = 1;
        queue<int> pq;
        pq.push(n);
        
        while(!pq.empty()){
            int curr = pq.front();
            pq.pop();
            bfs.push_back(curr);
            
            for(int i=0; i<adj[curr].size(); i++){
                if(!visited[adj[curr][i]]){
                    pq.push(adj[curr][i]);
                    visited[adj[curr][i]] = 1;
                }
            }
        }
        
        
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,0);
        vector<int> bfs;
        
        bfstrversal(0,adj,visited,bfs);
        
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