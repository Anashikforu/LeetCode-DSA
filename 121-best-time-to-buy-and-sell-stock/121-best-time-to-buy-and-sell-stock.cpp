class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0 ,min = 9999999;
        
        for(int i=0; i<prices.size(); i++){
            if(min > prices[i]){
                min = prices[i];
            }else if(result < prices[i]-min){
                result = prices[i]-min;
            }
        }
        
        return result;
    }
};