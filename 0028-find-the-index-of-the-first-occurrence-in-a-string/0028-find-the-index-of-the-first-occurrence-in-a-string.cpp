class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.size(); i++){
            int flag =1;
            for(int j=0; j<needle.size(); j++){
                if(haystack[i+j] != needle[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){return i;}
        }
        
        return -1;
    }
};