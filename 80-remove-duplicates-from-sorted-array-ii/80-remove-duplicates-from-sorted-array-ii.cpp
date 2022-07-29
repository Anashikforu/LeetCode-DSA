class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        int set=nums[0];
        
        for(int i=0; i<nums.size(); i++){
            
            if(set == nums[i]){
                x++;
                if(x > 2){
                    nums.erase(nums.begin()+i);
                    x--;
                    i--;
                }
            }else{
                set = nums[i];
                x=1;
            }
            
           
        }
        
        return nums.size();
    }
};