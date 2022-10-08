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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        if(!root)return res;
        
        queue<TreeNode*> quiz;
        quiz.push(root);
        
        while(!quiz.empty()){
            
            vector<int> level;
            int qsize = quiz.size();
            
            while(qsize--){
                TreeNode* topest = quiz.front();
                level.push_back(topest->val);
                quiz.pop();
                
                if(topest->left){
                    quiz.push(topest->left);
                }
                if(topest->right){
                    quiz.push(topest->right);
                }
            }
            
            res.push_back(level);
        }
        
        return res;
        
    }
};