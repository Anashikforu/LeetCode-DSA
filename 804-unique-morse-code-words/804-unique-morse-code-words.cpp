class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> checkList {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        unordered_map<string,int> umap;
        string temp = "";
    
        for(int i=0; i<words.size(); i++){
            temp = "";
            for(int j=0; j<words[i].length(); j++){
                temp += checkList[int(words[i][j] - 97)];
            }
            umap[temp]++;
        }
        
        return umap.size();
    }
    
};