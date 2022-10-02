class Solution {
public:
    int compareVersion(string version1, string version2) {
        long long rversion1 = 0,rversion2 = 0;
        int i=0,j=0;
        
        while(i<version1.length() or  j<version2.length() ){
            while(version1[i] != '.' and i<version1.length()){
                rversion1 = rversion1*10+ int(version1[i])-48;
                i++;
            }

            while(version2[j] != '.' and j<version2.length()){
                rversion2 = rversion2*10+ int(version2[j])-48;
                j++;
            }
            
            long long v1 = rversion1;
            long long v2 = rversion2;
            // cout<<v1<<" "<<v2<<endl;
            if(v1 > v2){
                return 1;
            }else if(v1 < v2){
                return -1;
            }
            
            if(i<version1.length()){
              i++;  
            } 
            if(j<version2.length()){
              j++;  
            }
            rversion1 = 0,rversion2 = 0;
        }
        
        return 0;
    }
};