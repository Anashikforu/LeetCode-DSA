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
    void dfs(TreeNode* root,vector<int> &values){
        
        if(!root){return;}
        
        values.push_back(root->val);
        dfs(root->left,values);
        dfs(root->right,values);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        
        dfs(root,values);
        
        sort(values.begin(), values.end());
        
        return values[k-1];
    }
};