class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> occur;
        for(auto a:s){occur[a]++;}
        for(auto a:t){
            occur[a]--;
            if(occur[a] == 0){occur.erase(a);}
        }
        return occur.size()==0;
    }
};