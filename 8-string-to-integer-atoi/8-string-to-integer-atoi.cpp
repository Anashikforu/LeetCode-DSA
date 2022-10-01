class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        bool pos=1;
        long long sum =0;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-'){ pos=0; i++;}
        else if(s[i] == '+'){ i++;}
        
        if(!isdigit(s[i])){ return 0;}
        else{
            sum = int(s[i])-48;
            i++;
        }
        
        while(isdigit(s[i])){
            sum = sum*10+int(s[i])-48;
            i++;
            if(sum>1e10){break;}
        }
        
        if(pos == 0){ sum *= -1;}
        
        if(sum >= INT_MAX ){ return  INT_MAX;}
        if(sum <= INT_MIN ){ return  INT_MIN;}
        
        return (int)sum;
        
    }
};