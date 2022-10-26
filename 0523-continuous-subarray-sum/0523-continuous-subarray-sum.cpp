class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> track{{0,0}};
        
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            
            int rest =sum%k;
            if(track.find(rest) == track.end()){track[rest] = i+1;}
            else if(track[rest] < i){return true;}
            
        }
        
        return false;
    }
};