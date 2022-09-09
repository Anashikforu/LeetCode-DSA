class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int limit=nums.size()/3;
        
        unordered_map<int,int> umap;
        
        for(auto a:nums){
            umap[a]++;
        }
        
        vector<int> result;
        
        for(auto a:umap){
            if(a.second > limit){
                result.push_back(a.first);
            }
        }
        
        return result;
    }
};