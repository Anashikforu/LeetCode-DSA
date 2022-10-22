class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> dp;
        dp.push_back(1);
        
        while(dp.size() < n){
            vector<int> temp;
            for(auto a: dp){
                if(2*a-1 <= n){
                    temp.push_back(2*a-1);
                }
            }
            
            for(auto a: dp){
                if(2*a <= n){
                    temp.push_back(2*a);
                }
            }
            dp = temp;
        }
        return dp;
    }
};