class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int width =0,n=heights.size();
        
        for(int i=0; i<=n; i++){
            while(!st.empty() and (i==n || heights[st.top()] >= heights[i])){
                int heig = heights[st.top()];
                st.pop();
                
                if(st.empty()){
                    width = i;
                }else{
                    width = i-st.top()-1;
                }
                
                maxArea = max(maxArea,heig*width);
                
            }
            st.push(i);
        }
        
        return maxArea;
    }
};