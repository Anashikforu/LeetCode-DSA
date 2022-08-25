class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> umap;
        
        for(int i=0; i<numbers.size(); i++){
            umap[numbers[i]] = i+1;
        }
        
        for(int i=0; i<numbers.size(); i++){
            int remain = (target -numbers[i]);
            if(umap[remain] > 0) { return {i+1,umap[remain]};}
            
        }
        
        return {0,0};
    }
};