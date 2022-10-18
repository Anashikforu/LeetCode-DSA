class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p=0,q=0,r=0;
        for(int i=1; i<n; i++){
            int two = 2*dp[p];
            int three = 3*dp[q];
            int five = 5*dp[r];
            dp[i] = min(five,min(two,three));
            if(dp[i] == two){p++;}
            if(dp[i] == three){q++;}
            if(dp[i] == five){r++;}
        }
        
        return dp[n-1];
    }
};