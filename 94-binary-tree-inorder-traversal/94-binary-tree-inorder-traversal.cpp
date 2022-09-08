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
    vector<int> dfs(TreeNode* root,vector<int> &result){
        if(!root){ return result;}
        
        if(root->left){
            dfs(root->left,result);
        }
        
        result.push_back(root->val);
        
        if(root->right){
            dfs(root->right,result);
        }
        
        return result;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> result;
        
        return dfs(root,result);
    }
};