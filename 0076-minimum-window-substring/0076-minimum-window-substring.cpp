class Solution {
public:
    string minWindow(string s, string t) {
        
        if (s.size() < t.size() )return "";
        
        unordered_map<char,int> mp,scount;
        int n = t.size();
        bool f1= false, f2 = false;
        int i=0,j=0,cnt=0,st=-1,end=0;
        string ans = "",pans = " ";
        
        for(auto a:t){
            mp[a]++;
        }
        
        while(true){
            f1= false, f2 = false;
            
            while(i<s.size() && cnt <n){
                scount[s[i]]++;
                
                if(mp[s[i]] >= scount[s[i]]){
                    cnt++;
                }
                i++;
                f1 = true;
            }
            
            while(j<i && cnt==n){
                if(st == -1 || end - st > i-j){
                    st = j;
                    end = i;
                }
                scount[s[j]]--;
                if(scount[s[j]] < mp[s[j]]){
                    cnt--;
                }
                
                f2 = true;
                j++;
            }
            
            if(f1 == false && f2 == false){break;}
        }
        
        if(st == -1){return "";}
        
        return s.substr(st,end-st);
        
    }
};