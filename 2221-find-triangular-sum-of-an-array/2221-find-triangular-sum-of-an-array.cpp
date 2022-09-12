class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int vsize = nums.size();
        if(vsize == 1){
            return nums[0];
        }
        vector<int> result;
        
        for(int i=0; i<vsize-1; i++){
            result.push_back((nums[i]+nums[i+1])%10);
        }
        
        return triangularSum(result);
    }
};