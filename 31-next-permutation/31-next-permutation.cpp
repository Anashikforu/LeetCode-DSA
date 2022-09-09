class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> result;
        int i=nums.size()-1,break_point=-1,swap_point=nums.size()-1;
        while(i > 0){
            if(nums[i-1] <nums[i]){
                break_point = i-1;
                break;
            }
            i--;
        }
        
       if(break_point > -1){
            i=nums.size()-1;
            while(i > 0){
                if(nums[i] > nums[break_point]){
                    swap_point = i;
                    break;
                }
                i--;
            }
        
            swap(nums[break_point],nums[swap_point]);

            reverse(nums.begin()+break_point+1,nums.end());
        }else{
            reverse(nums.begin(),nums.end());
        }
        
    }
};