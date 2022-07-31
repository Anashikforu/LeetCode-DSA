class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> answer_pattern;
        
        for(auto wd:words){
            unordered_map<char,char> w,p;
            int chk =1;
            for(int i=0; i<pattern.length(); i++){
                if(w.find(wd[i]) != w.end() and w[wd[i]] != pattern[i] ){
                    chk =0;
                    break;
                }
                w[wd[i]] = pattern[i];
                
                if(p.find(pattern[i]) != p.end() and p[pattern[i]] != wd[i] ){
                    chk =0;
                    break;
                }
                p[pattern[i]] = wd[i];
            }
            if(chk == 1){
                answer_pattern.push_back(wd);
            }
        }
        
        return answer_pattern;
    }
};