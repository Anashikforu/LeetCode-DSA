class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> res;
        vector<int> inDegree(numCourses,0);
        for(auto a:prerequisites){
            adj[a[1]].push_back(a[0]);
            inDegree[a[0]]++;
        }
        
        queue<int> pq;
        for(int i=0; i<numCourses; i++){
            if(inDegree[i] == 0){
                pq.push(i);
            }
        }
        
        while(!pq.empty()){
            int top = pq.front();
            pq.pop();
            res.push_back(top);
            for(auto a:adj[top]){
                --inDegree[a];
                if(inDegree[a] == 0){
                    pq.push(a);
                }
            }
            
        }
        
        
        return res.size()==numCourses?true:false;
    }
};