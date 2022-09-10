class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0){ return 0;}
        sort(nums.begin(),nums.end());
        
        int temp=1,res=1;
        
        for(int i=1; i<nums.size(); i++){
            
            if(nums[i-1]+1 == nums[i]){
                temp++;
            }else if(nums[i-1] != nums[i]){
                res = max(res,temp);
                temp=1;
            }
        }
        res = max(res,temp);
        return res;
    }
};