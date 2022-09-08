/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> quiz;
        quiz.push(root);
        
        int qsize = quiz.size(),flag = 0;
        
        while(qsize>0){
            
            for(int i=0; i<qsize; i++){
                TreeNode* vt = quiz.front();
                quiz.pop();

                if(!vt->left and vt->right){ return false;}
                
                if(vt->left ){
                    if(flag == 1 ){return false;}
                    quiz.push(vt->left);
                }
                if(vt->right){
                    if(flag == 1 ){return false;}
                    quiz.push(vt->right);
                }
                
                if((!vt->left and !vt->right) or (vt->left and !vt->right) ){ flag =1; }
            }
            
            
            qsize = quiz.size();
        }
        
        return true;
    }
};