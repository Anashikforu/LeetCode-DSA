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
    bool dfs(TreeNode* left,TreeNode* right){
        if(!left and !right){return true;}
        else if(!left or !right){return false;}
        
        if(left->val != right->val){return false;}
        
        if(dfs(left->left,right->right) and dfs(left->right,right->left)){
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left,root->right);
    }
};