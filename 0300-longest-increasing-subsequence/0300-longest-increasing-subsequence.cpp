class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp{nums[0]};
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > dp.back()){
                dp.push_back(nums[i]);
            }else{
                for(int x=0; x<dp.size(); x++){
                    if(dp[x] == nums[i] ){
                        break;
                    }else if( dp[x] > nums[i]){
                        dp[x] = nums[i];
                        break;
                    }
                }
            }
 
        }
        
        
        
        return dp.size();
    }
};