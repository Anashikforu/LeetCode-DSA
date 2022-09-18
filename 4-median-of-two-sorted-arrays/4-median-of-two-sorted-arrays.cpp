class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> number = nums1;
        
        for(auto a:nums2){
            number.push_back(a);
        }
        
        sort(number.begin(),number.end());
        
        int vsize = number.size();
        double median=0;
        
        if(vsize%2 == 1){
            median = number[vsize/2];
        }else{
            median += number[vsize/2];
            median += number[vsize/2-1];
            median /=2;
        }
        
        return median;
        
    }
};