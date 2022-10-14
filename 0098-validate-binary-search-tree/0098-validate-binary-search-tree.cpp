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
    void dfs(vector<int> &vals,TreeNode* root){
        if(!root){return;}
        dfs(vals,root->left);
        vals.push_back(root->val);
        dfs(vals,root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root){return true;}
        vector<int> vals;
        dfs(vals,root);
        if(vals.size() >= 2){
            for(int i=1; i<vals.size(); i++){
                if(vals[i] <= vals[i-1]){return false;}
            }
        }
        return true;
    }
};