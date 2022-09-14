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
    void collectpaths(TreeNode* root,int paths,int &palindrom){
        
        paths ^= (1<<root->val);
        
        if(root->left){
            collectpaths(root->left,paths,palindrom);
        }
        if(root->right){
            collectpaths(root->right,paths,palindrom);
        }
        if(!root->left and !root->right){
            if((paths & (paths - 1)) == 0){palindrom++;}

        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int> umap;
        int palindrom =0;
        collectpaths(root,0,palindrom);
        
        return palindrom;
    }
};