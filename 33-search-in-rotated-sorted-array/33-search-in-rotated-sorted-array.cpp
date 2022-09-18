class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0,high=nums.size()-1;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(nums[mid] == target){return mid;}
            
            if (nums[low] <= nums[mid]) { //<---step 5
              if (nums[low] <= target && nums[mid] >= target)
                high = mid - 1; //<---step 6 
              else
                low = mid + 1; //<---step 7
            } else { //<---step 7
              if (nums[mid] <= target && target <= nums[high])
                low = mid + 1;
              else
                high = mid - 1;
            }
            
            // if(nums[mid] > nums[mid+1] and target <= last_val){
            //     low = mid+1;
            // }else if(mid > 0 and nums[mid-1] > nums[mid] and target > last_val){
            //     cout<<low<<" "<<mid<<endl;
            //     high = mid-1;
            // }else if(((target < last_val) and (nums[mid] > last_val)) or(nums[mid] < target)){
            //     low = mid+1;
            // }else {
            //     high = mid-1;
            // }
        }
        
        return -1;
    }
};