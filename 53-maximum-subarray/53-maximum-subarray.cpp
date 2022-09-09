class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current =nums[0], max_all=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            max_current = max(max_current+nums[i],nums[i]);           
            max_all = max(max_all,max_current);
        }
        
        return max_all;
    }
};