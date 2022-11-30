class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf= 0, meh = INT_MIN;
        
        for(auto a:nums){
            msf = max(msf+a,a);
            meh = max(meh,msf);
        }
        
        return meh;
    }
};