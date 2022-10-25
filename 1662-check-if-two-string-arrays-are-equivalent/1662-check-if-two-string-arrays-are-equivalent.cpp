class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "", str2 = "";
        
        for(auto a:word1){
            str1 += a;
        }
        
        for(auto a:word2){
            str2 += a;
        }
        return str1==str2;
    }
};