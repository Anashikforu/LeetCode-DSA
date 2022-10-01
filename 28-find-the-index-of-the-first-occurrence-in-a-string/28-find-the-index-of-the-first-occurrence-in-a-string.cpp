class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,start=haystack.length();
        while(i<haystack.length()){
            // cout<<haystack[i] <<" "<< needle[j]<<endl;
            if(haystack[i] == needle[j]){
                j++;
            }else{
                i -= j;
                j = 0;
            }
            
            if(j == needle.length()){
                start = min(start,i-j+1);
                j= 0;
            }
            i++;
        }
        
        if(start == haystack.length()){
            return -1;
        }
        
        return start;
    }
};