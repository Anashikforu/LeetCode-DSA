class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=1; i<n; i++){
            int j=i;
            while(j>0){
                if(nums[j] < nums[j-1]){
                    swap(nums[j],nums[j-1]);
                }else{
                    break;
                }
                j--;
            }
        }
    }
};