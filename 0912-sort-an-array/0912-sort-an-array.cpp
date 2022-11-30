class Solution {
public:
    
    void merge(vector<int>& nums,int left,int mid,int right) {
        
        int i=left,j=mid,k=0;
        int temp[right - left + 1];
        
        while(i<mid && j<=right){
            if(nums[i] <= nums[j]){
                temp[k++] = nums[i++];
            }else{
                temp[k++] = nums[j++];
            }
        }
        
        while(i<mid){
            temp[k++] = nums[i++];
        }
        
        while(j<=right){
            temp[k++] = nums[j++];
        }
        
        for(int i=left; i<=right; i++){
            nums[i] = temp[i-left];
        }
        
    }
    
    void merge_sort(vector<int>& nums,int left,int right) {
        int mid = (left+right)/2;
        
        if(left<right){
            merge_sort(nums,left,mid);
            merge_sort(nums,mid+1,right);
            
            merge(nums,left,mid+1,right);
        }
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};