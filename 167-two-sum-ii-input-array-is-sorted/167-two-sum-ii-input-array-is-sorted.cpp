class Solution {
public:
    int searchIndex(vector<int>& numbers,int low, int remain){
        int high = numbers.size()-1;
        
        while(low < high){
            int mid = low + (high-low)/2;
            if(numbers[mid] < remain){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        
        return low;
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0; i<numbers.size(); i++){
            int remain = (target -numbers[i]);
            if(searchIndex(numbers,i+1,remain) > -1) {
                if(numbers[searchIndex(numbers,i+1,remain)] == remain){
                    return  {i+1,searchIndex(numbers,i+1,remain)+1};
                }
            }
            
        }
        
        return {0,0};
    }
};