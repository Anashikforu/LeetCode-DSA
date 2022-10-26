class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> shortest_path(n+1,INT_MAX);
        
        shortest_path[k] = 0;
        int delayTime = -1;
        
        for(int i=0; i<n; i++){
            for(auto a: times){
                if(shortest_path[a[0]] < INT_MAX){
                    shortest_path[a[1]] = min(shortest_path[a[0]]+a[2],shortest_path[a[1]]);
                }
            }
        }
        
        for(int i=1; i<n+1; i++){
            if(shortest_path[i] == INT_MAX){return -1;}
            delayTime = max(shortest_path[i],delayTime);
        }
        
        return delayTime;
        
    }
};