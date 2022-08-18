class Solution {
public:

    
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        int min_size = 0,half_size =  arr.size()/2,min_index = 0;
        
        for(auto a:arr){
            umap[a]++;
        }
        
        priority_queue<int> pq;
        
        for(auto a:umap){
            pq.push(a.second);
        }
        
        while(!pq.empty() and min_size < half_size){
            min_size += pq.top();
            min_index++;
            pq.pop();
        }
        
        return min_index;

    }
};