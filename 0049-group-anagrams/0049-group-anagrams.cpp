class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string,vector<int>> db;
        
        int i=0;
        for(auto a:strs){
            string temp = a;
            sort(temp.begin(),temp.end());
            db[temp].push_back(i);
            i++;
        }
        
        for(auto data:db){
            vector<string> anagrams;
            for(auto a:data.second){
                anagrams.push_back(strs[a]);
            }
            result.push_back(anagrams);
        }
        
        return result;
            
    }
};