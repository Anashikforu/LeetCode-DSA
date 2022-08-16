class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length(),result = -1;
        unordered_map<char,int> umap;
        char res= ' ';
        
        for(int i=0; i<len; i++){
            umap[s[i]]++;
        }
        
        for(int i=0; i<len; i++){
            if(umap[s[i]] == 1){
                return i;
            }
        }
            
        return result;
    }
};