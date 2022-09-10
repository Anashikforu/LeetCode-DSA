class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        set<vector<int>> sv;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long rest = (long long) target - ((long long)nums[i]+(long long)nums[j]);
                int left=j+1,right=nums.size()-1;
                while(left<right){
                    long long sum = (long long) nums[left] + (long long) nums[right] ;
                    if(sum > rest){right--;}
                    else if(sum < rest){left++;}
                    else{
                        vector<int> check;
                        check.push_back(nums[i]);
                        check.push_back(nums[j]);
                        check.push_back(nums[left]);
                        check.push_back(nums[right]);
                        sort(check.begin(), check.end());
                        sv.insert(check);
                        
                        while(left<right && nums[left] == check[2]){ left++;}
                        while(left<right && nums[right] == check[3]){ right--;}
                    }
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        
        vector<vector<int>> result(sv.begin(),sv.end());
        
        return result;
        
    }
};