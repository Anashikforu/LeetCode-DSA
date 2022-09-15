class Solution {
public:
    void recursion(map<vector<int>,int> &umap,vector<int> candidates,vector<vector<int>> &results,vector<int> result, int target){
        if( target == 0){
            sort(result.begin(),result.end());
            if(umap.find(result) == umap.end()){
                results.push_back(result);
                umap[result]++;
            }
            return;
        }
        
        for(auto a:candidates){
            vector<int> cpyresult = result;
            if(target -a >=0){
                cpyresult.push_back(a);
                recursion(umap,candidates,results,cpyresult,target-a);
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        map<vector<int>,int> umap;
        
        set<int> cand(candidates.begin(), candidates.end());
        vector<int> v(cand.begin(), cand.end());
        sort(v.begin(),v.end());
        
        recursion(umap,v,results,{},target);
        
        return results;
    }
};