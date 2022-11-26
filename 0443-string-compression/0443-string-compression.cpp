class Solution {
public:
    int compress(vector<char>& chars) {
        char curr=chars[0];
        int i=0,count=0;
        string result="";
        string conv="";
        vector<char> res;
        while(i<chars.size()){
            if(curr == chars[i]){
                count++;
            }else{
                res.push_back(curr);
                if(count >1){
                    conv = to_string(count);
                    result += to_string(count);
                    for(auto a:conv){
                        res.push_back(a);
                    }
                    
                }
                result += curr;
                curr = chars[i];
                count = 1;
            }
            i++;
        }
        res.push_back(curr);
        conv = to_string(count);
        if(count >1){
            result += to_string(count);
            for(auto a:conv){
                res.push_back(a);
            }
        }
        result += curr;
        chars = res;
        
        return result.size();
    }
};