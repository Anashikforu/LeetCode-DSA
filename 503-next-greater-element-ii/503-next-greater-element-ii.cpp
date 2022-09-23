class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if(nums.size() == 1){
            return {-1};
        }
        
        vector<int> vals(nums.size(),-1);
        stack<int> st;
        st.push(nums[nums.size()-1]);
        int i=0;
        
        for(int x=2*nums.size()-1; x>=0; x--){
            i=x%nums.size();
            
            while(!st.empty() and st.top() <= nums[i]){
                st.pop();
            }
            vals[i] = st.empty()?-1:st.top();
            st.push(nums[i]);
            
        }
        
        
        return vals;
    }
};