class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for(int i=1; i<=numRows; i++){
            vector<int> middle(i,1);
            if(i>2){
                int j=1;
                while(j<i-1){
                   middle[j] =  result[i-2][j-1]+result[i-2][j];
                    // cout<<result[i-2][j]<<endl;
                    j++;
                }
            }
            result.push_back(middle);
        }
        
        return result;
    }
};