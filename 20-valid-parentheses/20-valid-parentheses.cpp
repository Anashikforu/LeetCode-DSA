class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto a:s){
            if(!st.empty() and ( (st.top() == '(' and a == ')') or (st.top() == '{' and a == '}') or (st.top() == '[' and a == ']'))){
                st.pop();
            }else{
                st.push(a);
            }
        }
        
        return st.empty()?1:0;
    }
};