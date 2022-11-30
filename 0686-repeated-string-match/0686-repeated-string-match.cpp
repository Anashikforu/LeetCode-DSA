class Solution {
public:
    bool check(string &pat,string &text){
        int m=pat.size();
        int n=text.size();
        if(pat==text){return true;}
        if(m>=n){return false;}
        
        int d=256,q=11,h=1,p=0,t=0;
        
        for(int i=0; i<m-1; i++){
            h = (h*d)%q;
        }
        
        for(int i=0; i<m; i++){
            p = (p*d+pat[i])%q;
            t = (t*d+text[i])%q;
        }
        
        for(int i=0; i<=n-m; i++){
            if(p==t){
                int j=0;
                for(j=0; j<m; j++){
                    if(pat[j] != text[j+i]){
                        break;
                    }
                }
                
                if(j==m){return true;}
            }
            
            if(i<n-m){
                t = (d* (t-text[i]*h) + text[i+m])%q;
                if(t <0){
                    t += q;
                }
            }
        }
        
        return false;
    }
    
    int repeatedStringMatch(string a, string b) {
        string temp = "";
        int count = 0;
        while(temp.size()<b.size())
        {
            temp+=a;
            count++;
        }
        if(check(b,temp))
        {
          return count;
        }
        count++;
        temp+=a;
        if(check(b,temp))
            return count;
        return -1;
    }
};