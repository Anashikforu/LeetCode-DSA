class MinStack {
public:
    
    stack<int> mystack;
    priority_queue<int, vector<int>, greater<int>> minQueue;
    
    MinStack() {
        stack<int> temp;
        priority_queue<int, vector<int>, greater<int>> mintemp;
        mystack = temp;
        minQueue = mintemp;
    }
    
    void push(int val) {
        mystack.push(val);
        minQueue.push(val);
    }
    
    void pop() {
        priority_queue<int, vector<int>, greater<int>> temp;
        
        while(mystack.top() != minQueue.top()){
            temp.push(minQueue.top());
            minQueue.pop();
        }
        minQueue.pop();
        while(!temp.empty()){
            minQueue.push(temp.top());
            temp.pop();
        }
        
        mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return minQueue.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */