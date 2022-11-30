class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0 ,min = INT_MAX;
        
        for(auto a:prices){
            if(min > a){
                min = a;
            }else if(result < a-min){
                result = a-min;
            }
        }
        
        return result;
    }
};