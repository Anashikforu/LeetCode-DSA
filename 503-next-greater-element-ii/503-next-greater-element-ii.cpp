class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if(nums.size() == 1){
            return {-1};
        }
        vector<int> vals;
        int max=0;
        
        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            if(j >= nums.size()){j=0;}
            while(nums[j]<=nums[i]){
                j++;
                if(j == nums.size()){j=0;}
                if(j==i){break;}
            }
            if(nums[i] == nums[j]){
                vals.push_back(-1);
            }else{
                vals.push_back(nums[j]);
            }
            
        }
        
        
        return vals;
    }
};