class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int duplicate=0;
       for(int i=nums.size()-1; i>0; i--){
           if(nums[i] == nums[i-1]){
               // duplicate++;
               for(int j=i-1; j<nums.size()-1; j++){
                   nums[j] = nums[j+1];
               }
               nums.pop_back();
           }
       }
        
        return nums.size();
    }
};