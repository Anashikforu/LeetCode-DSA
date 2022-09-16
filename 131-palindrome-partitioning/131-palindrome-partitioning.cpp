class Solution {
public:
    
    bool palindromeChecker(string s,int front,int back){
        while(front<back){
            if(s[front] != s[back]){ return false; }
            front++;
            back--;
        }
        
        return true;
    }
    
    void dfs(vector<vector<string>> &result, string &s, int start, vector<string> &currentList) {
        if(start == s.length()){result.push_back(currentList);}
        
        for(int end=start; end<s.length(); end++){
            if(palindromeChecker(s,start,end)){
                currentList.push_back(s.substr(start, end - start + 1));
                dfs(result, s, end+1, currentList);
                currentList.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> currentList;
        dfs(result, s, 0, currentList);
        return result;
    }
};