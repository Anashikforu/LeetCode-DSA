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
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int qsize = q.size();
            while(qsize--){
                TreeNode* temp = q.front();
                nums.push_back(temp->val);
                q.pop();
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        sort(nums.begin(), nums.end());
        
        int i=0,j=nums.size()-1;
        
        while(i<j){
            if(nums[i]+nums[j] == k){
                return true;
            }else if(nums[i]+nums[j] < k){
                i++;
            }else if(nums[i]+nums[j] > k){
                j--;
            }
        }
        
        return false;
    }
};