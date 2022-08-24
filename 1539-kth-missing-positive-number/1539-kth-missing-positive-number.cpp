class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        
        int low =0, high = arr.size();
        
        while(low < high){
            int mid = low + (high - low)/2;
            
            if(arr[mid] - mid-1 < k ){
                // cout<<arr[mid] - mid-1<<"  "<<arr[mid+1] - mid-2<<endl;
                low = mid+1;
            }else{
                high = mid;
            }
        }
        
        
        
        return low+k;
    }
};