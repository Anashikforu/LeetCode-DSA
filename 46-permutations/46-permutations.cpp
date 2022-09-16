class Solution {
public:
    void next_permutation(vector<vector<int>> &results,vector<int> nums){
        int nsize = nums.size()-1;
        int missed = -1,sw = nsize;
        
        while(nsize>=1){
            // cout<<nums[nsize]<<">"<< nums[nsize-1]<<endl;
            if(nums[nsize] > nums[nsize-1]){missed = nsize-1; break;}
            nsize--;
        }
        
        if(missed > -1){
            for(int i=nums.size()-1; i>=0; i--){
                if(nums[i] > nums[missed]){sw =i; break;}
            }
            // cout<<nums[missed]<<" "<<nums[sw]<<endl;
            swap(nums[missed],nums[sw]);
            reverse(nums.begin()+missed+1,nums.end());
            results.push_back(nums);
            next_permutation(results,nums);
        }else{
            return;
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        results.push_back(nums);
        next_permutation(results,nums);
        return results;
    }
};