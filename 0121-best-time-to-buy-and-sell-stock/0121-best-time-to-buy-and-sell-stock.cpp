class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int msf = 0 ,meh = 0;
        
        for(int i=1; i<prices.size(); i++){
            msf = max(0,msf+prices[i]-prices[i-1]);
            meh = max(meh,msf);
        }
        
        return meh;
    }
};