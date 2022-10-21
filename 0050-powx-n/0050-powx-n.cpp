class Solution {
public:
    double myPow(double x, int n) {
        double result=1 ;
        long nn = n;
        
        if(nn<0){nn = -1*nn;}
        
        while(nn>0){
            if(nn %2 ==0){ x = x*x; nn /= 2;}
            else{
                result = result*x; 
                nn--;
            }
        }
        
        if(n<0){result = 1/result;}
        
        return result;
    }
};