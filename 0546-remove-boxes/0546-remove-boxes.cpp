class Solution {
public:
    
    int dp[100][100][100];
    
    int dfs(vector<int>& boxes,int left,int right,int streak){
        
        if(left>right){return 0;}
        
        if(dp[left][right][streak] != -1){return dp[left][right][streak];}
        
        int maxi =0;
        
        maxi = (streak+1)*(streak+1)+ dfs(boxes,left+1,right,0);
        
        for(int i=left+1; i<=right; i++){
            if(boxes[i] == boxes[left]){
                maxi = max(maxi,dfs(boxes,left+1,i-1,0)+ dfs(boxes,i,right,streak+1));
            }
        }
        
        return dp[left][right][streak]=maxi;
    }
    
    int removeBoxes(vector<int>& boxes) {
        int n = boxes.size();
        
        memset(dp,-1,sizeof(dp));
        
        return dfs(boxes,0,n-1,0);
    }
};