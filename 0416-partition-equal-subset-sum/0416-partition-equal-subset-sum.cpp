class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(auto a:nums){sum += a;}
        
        if(sum%2== 1){return false;}
        
        sum /= 2;
        
        vector<vector<int>> dp(nums.size(),vector<int>(sum+1,0));
        
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<=sum; j++){
                if(i==0){dp[i][j] = j==nums[0]; continue;}
                if(j >= nums[i]){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[nums.size()-1][sum];
    }
};