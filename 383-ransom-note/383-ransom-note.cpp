class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rLetter, mLetter;
        
        for(auto a:ransomNote){
            rLetter[a]++;
        }
        
        for(auto a:magazine){
            mLetter[a]++;
        }
        
        for(auto a:rLetter){
            if(a.second > mLetter[a.first]){
                return false;
            }
        }
        
        return true;
    }
};