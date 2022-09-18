class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){return nums[0];}
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(mid%2 == 1){mid++;}
            if(nums[mid-1] == nums[mid]){
                high = mid-2;
            }else if(nums[mid] == nums[mid+1]){
                low = mid+2;
            }else{
                return nums[mid];
            }
        }
        return nums[low];
    }
};