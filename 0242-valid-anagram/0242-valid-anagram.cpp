class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> first,second;
        
        if(s.length() != t.length())return false;
        
        for(int i=0; i<s.length(); i++){
            first[s[i]]++;
            second[t[i]]++;
        }
        
        for(auto a:first){
            if(second[a.first] != a.second)return false;
        }
        
        return true;
    }
};