class Solution {
public:
    int romanToInt(string s) {
        vector<int> values;
        int result=0;
        
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == 'I'){    result += 1; }
            else if(s[i] == 'V'){
                if( i-1 < s.length() and s[i-1] == 'I'){ result -=2; }
                result +=5; 
            }
            else if(s[i] == 'X'){
                if( i-1 < s.length() and s[i-1] == 'I'){ result -=2; }
                result +=10; 
            }
            else if(s[i] == 'L'){
                if( i-1 < s.length() and s[i-1] == 'X'){ result -=20; }
                result +=50; 
            }
            else if(s[i] == 'C'){
                if( i-1 < s.length() and s[i-1] == 'X'){ result -=20; }
                result +=100; 
            }
            else if(s[i] == 'D'){
                if( i-1 < s.length() and s[i-1] == 'C'){ result -=200; }
                result +=500; 
            }
            else if(s[i] == 'M'){
                if( i-1 < s.length() and s[i-1] == 'C'){ result -=200; }
                result +=1000; 
            }
        }
        
        
        return result;
    }
};