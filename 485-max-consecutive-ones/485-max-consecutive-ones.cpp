class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0, temp =0;
        
        for(auto a:nums){
            if(a == 1){
                temp++;
            }else{
                result = max(temp,result);
                temp = 0;
            }
        }
        result = max(temp,result);
        return result;
    }
};