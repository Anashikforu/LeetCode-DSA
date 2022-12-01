class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto row:prerequisites){
            indegree[row[1]]++;
            adj[row[0]].push_back(row[1]);
            adj[row[1]].push_back(row[0]);
        }
        
        queue<int> pq;
        for(int i=0; i<numCourses; i++){
            if(indegree[i]== 0){pq.push(i);}
        }
        
        vector<int> res;
        while(!pq.empty()){
            int top = pq.front();
            res.push_back(top);
            pq.pop();
            for(auto a:adj[top]){
                indegree[a]--;
                if(indegree[a] == 0){pq.push(a);}
            }
        }
        
        return res.size()==numCourses;
    }
};