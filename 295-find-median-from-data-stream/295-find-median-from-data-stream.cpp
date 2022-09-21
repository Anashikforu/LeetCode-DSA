class MedianFinder {
public:
    
    priority_queue<int> maxp;
    priority_queue<int, vector<int>, greater<int>> minp;
    
    MedianFinder() {
        priority_queue<int> pq;
        maxp = pq;
    }
    
    void addNum(int num) {
         if(maxp.empty() && minp.empty()) {
            maxp.push(num);
        }
        
        else if (num <= maxp.top() && maxp.size() > minp.size()){
            int top = maxp.top();
            maxp.pop();
            maxp.push(num);
            minp.push(top);
        }
        else if(num <= maxp.top() && maxp.size() == minp.size()){
            maxp.push(num);
        }
        else if(num > maxp.top() && maxp.size() > minp.size()){
            minp.push(num);
        }
        else if(num >= maxp.top() && num < minp.top() && maxp.size() == minp.size()){

            maxp.push(num);
        }
        else if(num >= minp.top() && maxp.size() == minp.size()){
                int top = minp.top();
                minp.pop();
                minp.push(num);
                maxp.push(top);
        }
    }
    
    double findMedian() {
       
        double mid =0;
        if(maxp.size() == minp.size()){
            mid =  (((double)(maxp.top()) + (double)(minp.top()))/(double)2);
        }
        else if(maxp.size() > minp.size()){
            mid = maxp.top();
        }
        return mid;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */