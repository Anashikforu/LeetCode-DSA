class StockSpanner {
public:
    
    stack<pair<int,int>> stock;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int result = 1;
        
        while(!stock.empty() and stock.top().first <= price){
            result += stock.top().second;
            stock.pop();
        }

        stock.push({price,result});
        
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */