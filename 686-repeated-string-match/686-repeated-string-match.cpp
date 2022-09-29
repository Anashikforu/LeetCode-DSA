class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        int i=0,j=0,repeat=1;
        string rex = a,copycat = "";
        
        while(i<b.length() && j<rex.length()){
            // cout<<b[i] <<" "<< rex[j]<<endl;
            if(b[i] == rex[j]){
                copycat += b[i];
                i++;
            }else{
                repeat =  1;
                rex = a;
                j -= i;
                i = 0;
                copycat = "";
            }
            j++;
            if(j == rex.length() && i<b.length()){ rex += a; repeat++;}
        }
        
        if(b != copycat){ return -1;}
        
        return repeat;
    }
};