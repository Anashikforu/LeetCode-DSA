class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> umap;
        int result=0,high=0,low=0,val;
        
        for(auto a:nums){
            umap[a]++;
        }
        
        for(auto a:umap){
            
            val = a.first;
            if(umap.count(val-1) != 0){
                result = max(result,umap[val-1] + umap[val]);
            }
            
            if(result == 1){ result = 0;}
        }
        
        
        return result;
    }
};