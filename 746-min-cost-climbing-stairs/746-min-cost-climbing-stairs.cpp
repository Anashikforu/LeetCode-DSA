class Solution {
public:
    int getMinCost(vector<int> cost,int index,vector<int> dp){
        
        if(index >= cost.size()){
            return 0;
        }
        
        if(dp[index] != -1){
            return dp[index];
        }
        
        dp[index] = cost[index]+min(getMinCost(cost,index+1,dp), getMinCost(cost,index+2,dp));
        
        return dp[index];
    }
    
    int getCostTab(vector<int> cost){
        int n = cost.size();
        vector<int>dp(n,-1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i=2; i<cost.size(); i++){
            dp[i] = cost[i]+min(dp[i-1],dp[i-2]);
        }
        
        return min(dp[n-1],dp[n-2]);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        // return min(getMinCost(cost,0,dp),getMinCost(cost,1,dp));
        return getCostTab(cost);
    }
};