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
    TreeNode* makeBST(TreeNode* &bst,int value){
        
        if(!bst){
            bst = new TreeNode(value); 
            return bst;
        }
        
        if(bst->val > value){return makeBST(bst->left,value);}
        else{ return makeBST(bst->right,value);}
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* bst = new TreeNode(preorder[0]);
        for(int i=1; i<preorder.size(); i++){
            makeBST(bst,preorder[i]);
        }
        
        return bst;
    }
};