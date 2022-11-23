class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] < nums[j]){
                    dp[j] = max(dp[i]+1,dp[j]);
                }
            }
        }
        
        int res = *max_element(dp.begin(),dp.end());
        
        return res;
    }
};