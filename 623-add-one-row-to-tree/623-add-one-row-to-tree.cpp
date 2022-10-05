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
    void solve(TreeNode* root, int val, int depth){
        if(root==NULL)return;
        if(depth==1){
            TreeNode* c=new TreeNode(root->val,root->left,root->right);
            root->val=val;
            root->left=c;
            root->right=NULL;
            return;
        }
        if(depth==2){
            TreeNode* c=new TreeNode(val,root->left,NULL);
            TreeNode* d=new TreeNode(val,NULL,root->right);
            root->left=c;
            root->right=d;
            return;
        }
        solve(root->left,val,depth-1);
        solve(root->right,val,depth-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        solve(root,val,depth);
        return root;
    }
};