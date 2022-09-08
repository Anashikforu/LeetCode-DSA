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
        dfs(root->left,values);
        values.push_back(root->val);
        dfs(root->right,values);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> values;
        
        dfs(root,values);
        sort(values.begin(),values.end());
        int second_min= values[0];
        
        for(auto a:values){
            if(a > second_min){
                return a;
            }
        }
        
        return -1;
        
    }
};