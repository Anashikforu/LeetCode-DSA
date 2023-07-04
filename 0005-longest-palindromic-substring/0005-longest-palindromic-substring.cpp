class Solution {
public:
    bool palindrome(string &s, int i, int j){
        while(j<i){
            if(s[i] != s[j]){
                return false;
            }
            j++;
            i--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        
        int res = 0, x=0, y= 0;
        
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<i; j++){
                if(palindrome(s,i,j)){
                    if(i-j > res){
                        res = i-j;
                        y=i;
                        x=j;
                    }
                }
            }
        }
        
        return s.substr(x,y-x+1);
    }
};