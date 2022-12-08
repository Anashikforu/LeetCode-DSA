class Solution {
public:
    bool binary_search(vector<int> matrix,int target){
        int low = 0, high = matrix.size()-1;
        
        while(low<high){
            int mid = (low+high)/2;
            if(matrix[mid] <target){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        
        if(matrix[low] == target){return true;}
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            int msize = matrix[i].size();
            if(matrix[i][0] < target and matrix[i][msize-1] > target){
                return binary_search(matrix[i],target);
            }else if(matrix[i][0] == target){
                return true;
            }else if(matrix[i][msize-1] == target){
                return true;
            }
        }
        
        return false;
    }
};