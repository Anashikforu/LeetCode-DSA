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
    int maxDepth(TreeNode* root) {
        int level = 0;
        if(!root)return level;
        queue<TreeNode*> quiz;
        quiz.push(root);
        
        while(!quiz.empty()){
            int qsize = quiz.size();
            
            while(qsize--){
                TreeNode* topest = quiz.front();
                quiz.pop();
                
                if(topest->left){
                    quiz.push(topest->left);
                }
                if(topest->right){
                    quiz.push(topest->right);
                }
            }
            level++;
        }
        
        return level;
        
    }
};