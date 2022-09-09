class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> m(matrix.size(),0);
        vector<int> n(matrix[0].size(),0);
        // Write your code here.
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] ==0){
                    m[i] = 1;
                    n[j] = 1;
                }
            }
        }

        for(int i=0; i<n.size(); i++){
            if(n[i] == 1){
                for(int j=0; j<matrix.size(); j++){
                    matrix[j][i] = 0;
                }
            }
        }

        for(int i=0; i<m.size(); i++){
            if(m[i] == 1){
                for(int j=0; j<matrix[i].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};