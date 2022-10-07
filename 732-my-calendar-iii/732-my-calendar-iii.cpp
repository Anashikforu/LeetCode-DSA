class MyCalendarThree {
public:
    map<int,int> calender;
    int res;
    
    MyCalendarThree() {
        calender[0] = 0;
        calender[1e9+1] = 0;
        res = 0;
    }
    void split(int x) {
        calender[x] = (--calender.upper_bound(x))->second; 
    }
    int book(int start, int end) {
        split(start);
        split(end);
        for (auto it = calender.find(start); it->first < end; it++) {
            res = max(res, ++(it->second));
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */