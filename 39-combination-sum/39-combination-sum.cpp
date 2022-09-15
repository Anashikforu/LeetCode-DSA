class Solution {
public:
    
    void comSum(vector<int>& candidates,set<vector<int>> &results, int target,vector<int> result){
        
        if(target == 0){
            sort(result.begin(),result.end());
            results.insert(result);
            return;
        }
        
        for(int i=0; i<candidates.size(); i++){
            
            if( target-candidates[i] < 0){ break;}
            
            if( i > 0 and candidates[i-1] == candidates[i]){ continue;}
            
            vector<int> cpyresult = result;
            cpyresult.push_back(candidates[i]);
            comSum(candidates,results,target-candidates[i],cpyresult);

        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> results;
        map<vector<int>,int> umap;
        
        sort(candidates.begin(),candidates.end());
        
        comSum(candidates,results,target,{});
        
        vector<vector<int>>comresults(results.begin(),results.end());
        
        return comresults;
    }
};