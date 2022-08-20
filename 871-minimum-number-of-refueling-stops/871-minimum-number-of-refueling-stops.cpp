class Solution {
public:
    
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int i=0, count =0, far = startFuel;
        
        while(far < target){
            while(i<stations.size() and stations[i][0] <= far){
                pq.push(stations[i][1]);
                i++;
            }
            
            if(pq.size() == 0){
                return -1;
            }
            far += pq.top();
            pq.pop();
            count++;
            
        }
        
        return count;
    }
};