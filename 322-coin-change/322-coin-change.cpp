class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        int few=0,limit=0;
        
        vector<int> dp(amount+1,INT_MAX);
        
        dp[0] = 0;
        
        for(int i=1; i<=amount; i++)
        {
            int sub_res = INT_MAX;
            for(int j=0; j<coins.size(); j++)
            {
                if(coins[j] <= i)
                    sub_res = min(dp[i - coins[j]],sub_res);
            }
            if(sub_res !=INT_MAX)
                dp[i] = 1 + sub_res;
        }
        
        if(dp[amount] != INT_MAX){ return dp[amount];}
        
        return -1;
    }
};