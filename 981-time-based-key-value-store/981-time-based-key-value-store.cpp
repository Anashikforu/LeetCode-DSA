class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> storage;
    
    TimeMap() {
        storage.clear();
    }
    
    void set(string key, string value, int timestamp) {
        storage[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if (storage.find(key) == storage.end()) {
            return "";
        }
        
        if (timestamp < storage[key][0].first) {
            return "";
        }
        
        int left=0, right = storage[key].size();
        
        while(left<right){
            int mid = (left+right)/2;
            if(storage[key][mid].first <= timestamp){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        
        if (right == 0) {
            return "";
        }
        
        return storage[key][right-1].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */