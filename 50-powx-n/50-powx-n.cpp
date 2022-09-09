class Solution {
public:
    double myPow(double x, int n) {
        double result=1 ;
        
        if(n == 0){
            return result;
        }
        
        if(x==1){
            return 1;
        }else if(x==-1){
            if(n%2==0){return 1;}
            else{return -1;}
        }
        
        
        if(n>0){
            for(int i=0; i<n; i++){
                result *= x;
            }
        }else if(n<0){
            // n = n*(-1);
            for(int i=0; i>n; i--){
                result *= 1/x;
                if(result == 0){break;}
            }
        }
        
        return result;
    }
};