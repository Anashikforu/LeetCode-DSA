class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int vsize = nums.size();
        while(vsize> 1){
            for(int i =0;i<vsize-1; i++)
            {
                nums[i] = (nums[i] + nums[i+1])%10;
            }
            vsize--;
        }
        
        return  nums[0];
    }
};