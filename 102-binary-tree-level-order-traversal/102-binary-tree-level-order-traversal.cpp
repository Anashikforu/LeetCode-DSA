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
        vector<vector<int>> results;
        if(!root) return results;
        
        queue<TreeNode*> quiz;
        quiz.push(root);
        
        while(!quiz.empty()){
            vector<int> layer;
            int q_size = quiz.size();
            
            while(q_size--){
                auto vt = quiz.front();
                layer.push_back(vt->val);
                quiz.pop();

                
                if(vt->left){ quiz.push(vt->left);}
                if(vt->right){ quiz.push(vt->right);}
            }
            results.push_back(layer);
        }
        
        return results;
    }
};