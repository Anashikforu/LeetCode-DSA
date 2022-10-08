class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min_diff=INT_MAX,n=nums.size(),res=0;
        int j=0,k=0;
        for(int i=0;i<(n-2);i++){
            j=i+1;k=(n-1);
            while(j<k){
                int n=nums[i]+nums[j]+nums[k];
                if(abs(target-n)<min_diff) {min_diff=abs(target-n);res=n;}
                if(n>target) k--;
                else j++;
            }
        }
        return res;
    }
};