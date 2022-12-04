class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long s_sum = 0, e_sum = 0;
        int result=0,avg=0,last_avg = INT_MAX;
        
        for(auto a:nums){
            s_sum += a;
        }
        
        
        for(int i=0; i<nums.size(); i++){
            e_sum += nums[i];
            avg = (e_sum/(i+1));
            if(i<nums.size()-1){
                avg -=  ((s_sum-e_sum)/(nums.size()-i-1));
            }
            avg = abs(avg);
            if(avg < last_avg){
                last_avg = avg;
                result = i;
            }
        }
        
        return result;
    }
};