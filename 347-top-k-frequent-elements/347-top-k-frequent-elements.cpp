class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> pq;
        for(auto a:nums){
            pq[a]++;
        }
        vector<int> results;
        priority_queue<pair<int,int>> value;
        
        for(auto a:pq){
            value.push({a.second,a.first});
        }
        
        for(int i=0; i<k; i++){
            results.push_back(value.top().second);
            value.pop();
        }
        
        return results;
    }
};