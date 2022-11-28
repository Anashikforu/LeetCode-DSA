class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        
        for(auto a:s){
            mp[a]++;
        }
        
        for(auto a:t){
            if(mp.find(a) == mp.end()){
                return false;
            }
            
            if(mp[a] == 1){mp.erase(a);}
            else{mp[a]--;}
        }
        
        return mp.size()==0;
    }
};