class Solution {
public:
    void merge(vector<int>& nums,int left,int mid,int right){
        vector<int> temp;
        int i=left,j=mid+1;
        while(i<=mid && j <= right){
            if(nums[i]<nums[j]){temp.push_back(nums[i++]);}
            else{temp.push_back(nums[j++]);}
        }
        
        while(i<=mid){temp.push_back(nums[i++]);}
        while(j<=right){temp.push_back(nums[j++]);}
        
        for(int i=left; i<=right; i++){
            nums[i] = temp[i-left];
        }
    }
    
    void merge_sort(vector<int>& nums,int left,int right){
        if(left == right){return;}
        int mid = (left+right)/2;
        merge_sort(nums,left,mid);
        merge_sort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        merge_sort(nums,0,n-1);
        
        return nums;
    }
};