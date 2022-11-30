class Solution {
public:
    void merge(vector<int>& nums,int left,int mid,int right){
        int temp[right-left+1];
        int i=left,j=mid+1,k=0;
        while(i<=mid && j <= right){
            if(nums[i]<nums[j]){temp[k++] = nums[i++];}
            else{temp[k++] = nums[j++];}
        }
        
        while(i<=mid){temp[k++] = nums[i++];}
        while(j<=right){temp[k++] = nums[j++];}
        
        for(int i=left; i<=right; i++){
            nums[i] = temp[i-left];
        }
    }
    
    void merge_sort(vector<int>& nums,int left,int right){
        int mid = (left+right)/2;
        if(left<right){
            merge_sort(nums,left,mid);
            merge_sort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        merge_sort(nums,0,n-1);
        
        return nums;
    }
};