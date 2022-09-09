class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        int majority=0,element=0;
        
        for(auto a:nums){
            umap[a]++;
        }
        
        for(auto a:umap){
            if(a.second > majority){
                element = a.first,majority = a.second;
            }
        }
        
        return element;
    }
};