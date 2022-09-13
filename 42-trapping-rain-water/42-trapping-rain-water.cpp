class Solution {
public:
    int trap(vector<int>& height) {
        int maxindex= 0,currMax =0,result=0;
        
        for(int i=1; i<height.size(); i++){
            if(height[i]>height[maxindex]){
                maxindex = i;
            }
        }
        
        for(int i=0; i<maxindex; i++){
            currMax = max(currMax,height[i]);
            result += currMax - height[i];
        }
        
        currMax = 0;
        for(int i=height.size()-1; i>maxindex; i--){
            currMax = max(currMax,height[i]);
            result += currMax - height[i];
        }
        
        return result;
    }
};