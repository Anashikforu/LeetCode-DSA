class Solution {
public:
    int solve(vector<int>& nums,vector<int> dp, int target){
        if(target < 0){
            return 0;
        }
        
        if(target == 0){
            return 1;
        }
        
        if(dp[target] != -1){
            return dp[target];
        }
        
        int answer = 0;
        
        for(int i=0; i<nums.size(); i++){
            answer += solve(nums,dp,target-nums[i]);
        }
        
        dp[target] = answer;
        
        return dp[target];
    }
    
    int solveTab(vector<int>& nums, int target){
        vector<unsigned int> dpTab(target+1,0);
        
        dpTab[0] = 1;
        
        for(int i=1; i<=target; i++){
            for(int j=0; j<nums.size(); j++){
                if (i-nums[j] >= 0)
                    dpTab[i] += dpTab[i-nums[j]]; 
            }
        }
        
        return dpTab[target];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1,-1);
        
        return solveTab(nums,target);
    }
};