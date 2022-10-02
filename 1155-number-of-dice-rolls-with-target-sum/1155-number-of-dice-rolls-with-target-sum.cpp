class Solution {
public:
    const int mod=1e9+7;
    int rec(int n,int k,int target,vector<vector<int>>&dp)
    {
        if(n>target||n*k<target)return 0;
        if(dp[n][target]!=-1)return dp[n][target];
        if(n==0)return 1;
        
        if(n==1)return ((target>=1&&target<=k)?1:0);
         int sum=0;
        for(int i=1;i<=k;i++)
        {
            sum+=rec(n-1,k,target-i,dp); 
            sum=sum%mod;
        }
        
        return dp[n][target]=sum;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return rec(n,k,target,dp);
    }
};