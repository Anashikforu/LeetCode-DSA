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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        
        queue<TreeNode*> quiz;
        quiz.push(root);
        int levelsize=0;
        
        while(!quiz.empty()){
            int qsize = quiz.size();
            vector<int> level;
            
            while(qsize--){
                TreeNode* temp = quiz.front();
                level.push_back(temp->val);
                quiz.pop();
                
                if(temp->left){
                    quiz.push(temp->left);
                }
                
                if(temp->right){
                    quiz.push(temp->right);
                }
            }
            if(levelsize%2==1){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            levelsize++;
        }
        
        return ans;
        
    }
};