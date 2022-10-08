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
    int dfs(TreeNode* root){
        if(!root){ return 0;}
        int leftLevel  = dfs(root->left);
        if(leftLevel == -1){return -1;}
        int rightLevel  =dfs(root->right);
        if(rightLevel == -1){return -1;}
        if(abs(leftLevel-rightLevel) > 1){return -1;}
        return max(leftLevel,rightLevel)+1;
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        
        return dfs(root) != -1;
    }
};