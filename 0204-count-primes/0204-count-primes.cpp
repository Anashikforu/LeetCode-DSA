class Solution {
public:
    int countPrimes(int n) {
        vector<bool> visited(n,0);
        
        int count =0;
        
        for(int i=2; i<n; i++){
            if(visited[i] == true) continue;
            count++;
            for(int j=i; j<n; j+=i)visited[j] = true;
        }
        
        return count;
    }
};