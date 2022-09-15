class Solution {
public:
    void recursion(vector<int> &nums,vector<vector<int>> &results,map<vector<int>,int> &umap,int vsize,vector<int> result,int ind){
        if(ind == vsize){
            sort(result.begin(),result.end());
            if(umap.find(result) == umap.end()){
                results.push_back(result);
                umap[result]++;
            }
            return;
        }
        
        recursion(nums,results,umap,vsize,result,ind+1);
        result.push_back(nums[ind]);
        recursion(nums,results,umap,vsize,result,ind+1);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map<vector<int>,int> umap;
        int vsize = nums.size();
        vector<vector<int>> results;
        
        recursion(nums,results,umap,vsize,{},0);
        
        return results;
        
    }
};