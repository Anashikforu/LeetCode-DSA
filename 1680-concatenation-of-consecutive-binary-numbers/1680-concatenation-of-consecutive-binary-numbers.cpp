class Solution {
public:
    int concatenatedBinary(int n) {
        long ans = 0, MOD = 1e9 + 7;
        
        for (int i = 1; i <= n; ++i) {
            int len = log2(i) + 1;
            ans = ((ans << len) % MOD + i) % MOD;
        }
        return ans;
    }
};