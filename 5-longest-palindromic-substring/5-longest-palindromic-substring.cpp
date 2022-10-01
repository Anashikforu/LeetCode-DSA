class Solution {
public:
    int expandAroundCenter(string s,int left,int right){
        int l=left,r=right;
        while(l>=0 and r<s.length() and s[l] == s[r]){
            l--;
            r++;
        }
        
        return r-l-1;
    }
    
    string longestPalindrome(string s) {
        if(s.length()==0){ return "";}
        int start =0, end =0,len1,len2,len=0;
        for(int i=0; i<s.length(); i++){
            len1 = expandAroundCenter(s,i,i);
            len2 = expandAroundCenter(s,i,i+1);
            len = max(len1,len2);
            if(len > end-start){
                start = i - (len-1)/2;
                end = i + (len)/2;
            }
        }
        
        return s.substr(start,end-start+1);
    }
    
};