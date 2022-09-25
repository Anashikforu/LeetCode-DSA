class MyCircularQueue {
    vector<int> queue ;                             //Queue Initialization
    int q_start;                                    //A pointer to indicate the first place
    int q_end;                                    //A pointer to indicate the last place
    int len;
public:
    MyCircularQueue(int k) {
        queue.resize(k);
        q_start = 0;
        q_end = 0;
        len = 0;
    }
    
     bool enQueue(int value) {
        if (isFull()) {
                return false;
        }
        q_end = q_end%queue.size();
        queue[q_end] = value;
        q_end++;
        len++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
                return false;
        }
        len--;
        q_start++;
        return true;
    }
    
    int Front() {
        if (isEmpty()) {
                return -1;
        }
        
        return queue[q_start%queue.size()];
    }
    
    int Rear() {
        if (isEmpty()) {
                return -1;
        }
        if(q_end == 0 ){
            return queue[queue.size() - 1];
        }
        return queue[q_end - 1];

    }
    
    bool isEmpty() {
        return len == 0;
    }
    
    bool isFull() {
        return len == queue.size();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */