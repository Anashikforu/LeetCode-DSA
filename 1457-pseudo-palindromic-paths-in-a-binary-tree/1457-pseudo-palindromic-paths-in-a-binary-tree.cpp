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
    void collectpaths(TreeNode* root,unordered_map<int,int> paths,int &palindrom){
        paths[root->val]++;
        
        if(root->left){
            collectpaths(root->left,paths,palindrom);
        }
        if(root->right){
            collectpaths(root->right,paths,palindrom);
        }
        if(!root->left and !root->right){
            int only_one = 0;
            
            for(auto a:paths){
                if(a.second%2 == 1){
                    only_one++;
                }
                if(only_one > 1){break;}
            }
            
            if(only_one < 2){palindrom++;}

        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int> umap;
        int palindrom =0;
        collectpaths(root,umap,palindrom);
        
        return palindrom;
    }
};