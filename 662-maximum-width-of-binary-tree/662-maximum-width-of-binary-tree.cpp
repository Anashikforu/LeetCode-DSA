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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int long long>> quiz;
        quiz.push({root,0});
        int width = 0;
        
        while(!quiz.empty()){
            int qsize = quiz.size();
            int last = qsize;
            int long long currMin = quiz.front().second;
            int  start,end;
            while(qsize--){
                pair<TreeNode*,int long long> t  = quiz.front();
                TreeNode* curr = t.first;
                int long long currIndex = t.second-currMin;
                quiz.pop();
                if (qsize == last){
                    start = currIndex;
                } 
                if (qsize == 0){
                    end = currIndex;
                }
               
                if(curr->left){
                    quiz.push({curr->left,(currIndex*2+1)});
                }
                
                if(curr->right){
                    quiz.push({curr->right,(currIndex*2+2)});
                }
            }
            width = max(width,end-start+1);
        }
        
        return width;
    }
};