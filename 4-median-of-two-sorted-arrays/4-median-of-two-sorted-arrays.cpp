class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray ;
        int m = nums1.size(), n= nums2.size(),x = 0,y = 0;
        
        while(x < m or y < n){
            if(x == m){
               mergedArray.push_back(nums2[y]); 
                y++;
            }else if(y == n){
                mergedArray.push_back(nums1[x]);
                x++;
            }else if(nums1[x] < nums2[y]){
                mergedArray.push_back(nums1[x]);
                x++;
            }else{
               mergedArray.push_back(nums2[y]);
                y++; 
            }
        }
        
        int arr_size = mergedArray.size();
        double result = 0;
        
        if(arr_size%2 == 0){
            result = (mergedArray[(arr_size)/2]+mergedArray[(arr_size)/2 - 1])/2.00;
        }else{
            result = mergedArray[(arr_size)/2];
        }
        
        return result;
    }
};