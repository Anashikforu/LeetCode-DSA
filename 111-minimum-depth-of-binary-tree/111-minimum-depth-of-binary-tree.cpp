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
    int minDepth(TreeNode* root) {
        if(root == NULL){ return 0;}
        
        queue<TreeNode*> quiz;
        quiz.push(root);
        int order = 0;
        
        while(!quiz.empty()){
            
            int q_size= quiz.size();
            int check =0;
            
            while(q_size--){
                auto vt = quiz.front();
                quiz.pop();
                
                if(vt->left){quiz.push(vt->left);}
                if(vt->right){quiz.push(vt->right);}
                
                if(vt->left == NULL && vt->right == NULL){
                    check =1;
                    break;
                }
            }
            
            order++;
            if(check == 1){ break;}
        }
        
        
        
        return order;
    }
};