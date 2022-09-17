class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto a:nums){
            umap[a]++;
        }
        for(auto a:umap){
            if(a.second == 1){
                return a.first;
            }
        }
        return 0;
    }
};