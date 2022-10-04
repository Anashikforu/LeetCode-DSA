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
    bool dfs(TreeNode* root, int currentSum, int targetSum){
        if(!root){
            return false;
        }
        
        if(!root->left and !root->right and currentSum+root->val == targetSum){
            return true;
        }
        
        return dfs(root->left,currentSum+root->val,targetSum) or dfs(root->right,currentSum+root->val,targetSum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,0,targetSum);
    }
};