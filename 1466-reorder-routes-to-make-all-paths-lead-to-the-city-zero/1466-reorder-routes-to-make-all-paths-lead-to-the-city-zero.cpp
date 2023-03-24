class Solution {
public:
    void dfs(int curr,map<vector<int>,int> &edges,vector<vector<int>>& adjs,set<int> &visited,int &changes){
        
        for(auto n:adjs[curr]){
            if(visited.find(n) != visited.end())
                continue;
            if(edges.find({n,curr}) == edges.end())
                changes++;
            visited.insert(n);
            dfs(n,edges,adjs,visited,changes);
        }
    }
    
    int minReorder(int n, vector<vector<int>>& connections) {
        map<vector<int>,int> edges;
        vector<vector<int>> adjs(n,vector<int>());
        
        for(auto con:connections){
            edges[con] = 1;
            adjs[con[0]].push_back(con[1]);
            adjs[con[1]].push_back(con[0]);
        }
        
        int changes=0;
        set<int> visited;
        visited.insert(0);
        dfs(0,edges,adjs,visited,changes);
        
        return changes;
        
    }
};