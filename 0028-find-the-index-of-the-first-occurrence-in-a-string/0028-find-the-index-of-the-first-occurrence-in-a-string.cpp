class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int kfreq = 0,temp=0,i=0,j=needle.size()-1;
        vector<int> hfreq(haystack.size(),0);
        
        for(auto a:needle){
            kfreq += a - 'a' + 1;
        }
        
        for(auto a:haystack){
            temp += a - 'a' + 1;
            hfreq[i] = temp;
            i++;
        }
        
        i=0;
        int flag=1;
        while(j<haystack.size()){
            flag=1;
            if(i == 0 ){
                if(hfreq[j] == kfreq){
                    for(int a=0; a<needle.size(); a++){
                        if(haystack[a+i] != needle[a]){
                            flag =0;
                            break;
                        }
                    }
                }else{
                    flag = 0;
                }
            }else if(hfreq[j] - hfreq[i-1] == kfreq){
                for(int a=0; a<needle.size(); a++){
                    if(haystack[a+i] != needle[a]){
                        flag =0;
                        break;
                    }
                }
            }else{
                flag = 0;
            }
            
            if(flag == 1){
                return i;
            }
            
            i++;
            j++;
        }
        
        return -1;
    }
};