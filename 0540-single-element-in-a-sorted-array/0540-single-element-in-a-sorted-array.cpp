class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int val=0;
        for(auto a:nums){
            val^=a;
        }
        return val;
    }
};