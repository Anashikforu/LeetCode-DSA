class Solution {
    int n,m;
    vector<vector<bool>> atlantic, pacific;
    vector<vector<int>> ans;
    queue<pair<int,int>> q;
    const int d4i[4]={0,0,-1,1}, d4j[4]={1,-1,0,0};
    
    bool check(int i,int j){
        return 0<=i and 0<=j and n>i and m>j;
    }
    void bfs(const std::vector<vector<int>>& heights,vector<vector<bool>>& visited,int i,int j){
        q.push({i,j});
        
        while(!q.empty()){
            tie(i,j) = q.front(); 
            q.pop();
            
            if(visited[i][j])
                continue;
            visited[i][j]=true;
            
            if(pacific[i][j] and atlantic[i][j])
                ans.emplace_back(vector<int>({i,j}));
            
            for(int k=0;k<4;++k){
                int ti = i+d4i[k];
                int tj = j+d4j[k];
                if(check(ti, tj) and heights[ti][tj]>=heights[i][j])
                    q.push({ti, tj});
            }
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n=size(heights);
        m=size(heights[0]);
        
        atlantic = pacific = vector<vector<bool>>(n, vector<bool>(m,false));
        ans.clear();
        for(int i=0;i<n;++i)
            bfs(heights, pacific, i, 0), bfs(heights, atlantic, i, m-1);
        
        for(int i=0;i<m;++i)
            bfs(heights, pacific, 0, i), bfs(heights ,atlantic, n-1, i);
        
        return ans;
    }
};