class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string res;
        
        int diff;
        
        if(a.length() > b.length()){
            diff = a.length() - b.length();
            for(int i=0; i<diff; i++){
                b ='0'+b;
            } 
        }else{
            diff = b.length() - a.length();
            
            for(int i=0; i<diff; i++){
                a ='0'+a;
            }
        }
        
        res = a;
        
        
        for(int i=a.length()-1; i>=0; i-- ){
            
            if(a[i] == '1' && b[i] == '1' ){
                if(carry == 1){
                    res[i] = '1';
                    carry = 1;
                }else{
                    res[i] = '0';
                    carry = 1;
                }
                
            }else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')  ){
                if(carry == 1){
                    res[i] = '0';
                    carry = 1;
                }else{
                    res[i] = '1';
                }
            }else{
                if(carry == 1){
                    res[i] = '1';
                    carry = 0;
                }else{
                    res[i] = '0';
                }
            }
        }
        
        if(carry == 1){
            res = '1'+res;
        }
        
        return res;
    }
};