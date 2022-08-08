class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int result = 0;
        vector<int>dp(nums.size(),1);
        for(int i=0; i<nums.size(); i++){
            for(int j= i+1; j<nums.size(); j++){
                if(nums[j] > nums[i]){
                    dp[j] = max(dp[i]+1,dp[j]);
                }
            }
            
        }
        
        for(auto x:dp){
            result = max(result,x);
        }
        
        return result;
    }
};