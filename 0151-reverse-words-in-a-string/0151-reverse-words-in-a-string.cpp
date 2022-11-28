class Solution {
public:
    string reverseWords(string s) {
        stringstream vs(s);
        string val;
        stack<string> data;
        
        while(vs>>val){
            data.push(val);
        }
        
        string str = "";
        while(!data.empty()){
            str += data.top();
            if(data.size() > 1){str += " ";}
            data.pop();
        }
            
        return str;
    }
};