class Solution {
public:
    void comPermute(int index,vector<int> &nums,vector<vector<int>> &results){
        if(index == nums.size()){
            results.push_back(nums);
            return;
        }
        
        for(int i=index; i<nums.size(); i++){
            swap(nums[index],nums[i]);
            comPermute(index+1,nums,results);
            swap(nums[index],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        
        comPermute(0,nums,results);
        
        return results;
    }
};