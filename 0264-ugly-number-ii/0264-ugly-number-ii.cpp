class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p=0,q=0,r=0;
        for(int i=1; i<n; i++){
            int twos=2*dp[p];
            int threes=3*dp[q];
            int fives=5*dp[r];
            
            dp[i] = min(min(twos,threes),fives);
            
            if( dp[i] == twos){ p++;}
            if( dp[i] == threes){ q++;}
            if( dp[i] == fives){ r++;}
        }
        
        return dp[n-1];
        
    }
};