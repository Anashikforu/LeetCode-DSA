class MinStack {
public:
    
    stack<int> mystack;
    int mini = INT_MAX;
    
    MinStack() {
        stack<int> temp;
        mystack = temp;
    }
    
    void push(int val) {
        mystack.push(val);
        mini = min(mini,val);
    }
    
    void pop() {
        stack<int> temp = mystack;
        if(mini == temp.top()){
            mini = INT_MAX;
            temp.pop();
            while(!temp.empty()){
                mini = min(mini,temp.top());
                temp.pop();
            }
        }
        mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return mini;
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