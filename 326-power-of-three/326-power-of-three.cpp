class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){ return false;}
        else if(n ==1){ return true;}
        
        while(n > 2){
            if(n%3 != 0 ){
                return false;
            }
            n = n/3;
            if(n == 1){
                return true;
            }
        }
        
        return false;
    }
};