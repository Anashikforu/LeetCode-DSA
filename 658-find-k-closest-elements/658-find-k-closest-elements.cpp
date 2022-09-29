class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> umap;
        vector<int> result;
        
        for(auto a: arr){
            int dis = a-x<0?(a-x)*(-1):a-x;
            umap.push_back({dis,a});
        }
        
        sort(umap.begin(),umap.end());
        
        for(int i=0; i<k; i++){
            result.push_back(umap[i].second);
        }
        
        sort(result.begin(),result.end());
        
        return result;
    }
};