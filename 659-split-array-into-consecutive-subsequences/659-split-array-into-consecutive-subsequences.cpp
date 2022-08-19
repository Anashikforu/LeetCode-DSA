class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> umap;
        int largest =0;
        for(auto a:nums){
            if(largest < a){
                largest = a;
            }
            umap[a]++;
        }
        
        int streak = 0,num_size = nums.size(),map_size = umap.size();
        
        if(umap.size() < 3){
            return false;
        }
        
        while(num_size > 2){
            streak = 0;
            for(int i=1; i<=largest; i++){
                if(umap[i] > 0){
                    // cout<<i<<" "<<umap[i-1]+1<<"----"<<umap[i]<<endl;
                    if(streak > 1 and umap[i-1]+1 > umap[i]){
                        break;
                    }
                    streak++;
                    umap[i]--;
                }else if(streak >= 3){
                    break;
                }else{
                    streak = 0;
                }
            }
            // cout<<streak<<endl;
            if(streak >= 3){
                num_size = num_size - streak;
                // cout<<num_size<<endl;
                if(num_size < 3 and num_size > 0){
                    return false;
                }else if(num_size == 0){
                    return true;
                }
            }else{
                return false;
            }
            
        }
        
        
        return true;
    }
};