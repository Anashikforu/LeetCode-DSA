class Solution {
public:
    string mountCS(int current,int limit,string result){
        if(limit-current == 0){
            return result;
        }
        
        string newResult ="";
        char prev = result[0];
        int count = 1;
        for(int i=1; i<result.length(); i++){
            if (prev == result[i]){
                count++;
            }else{
                // cout<<count<<prev<<endl;
                newResult += to_string(count);
                newResult += prev;
                prev = result[i];
                count = 1;
            }
        }
        
        newResult += to_string(count);
        newResult += prev;
        
        current++;
        
        return mountCS(current,limit,newResult);
    }
    
    string countAndSay(int n) {
        return mountCS(1,n,"1");
    }
};