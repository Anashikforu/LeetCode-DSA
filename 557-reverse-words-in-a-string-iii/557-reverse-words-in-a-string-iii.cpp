class Solution {
public:
    string reverseWords(string s) {
        string res="";
        stringstream ss(s);
        while (ss >> s) {
            reverse(s.begin(),s.end());
            res += s;
            res += " ";
        }
        
        res.pop_back();
        
        return res;
    }
};