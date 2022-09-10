class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int result=0;
        
        for(int i=0; i<s.length(); i++){
            unordered_map<char,int> umap;
            for(int j=i; j<s.length(); j++){
                if(umap[s[j]] == 1)break;
                umap[s[j]]++;
            }
            result = max(result,(int)umap.size());
        }
        
        return result;
    }
};