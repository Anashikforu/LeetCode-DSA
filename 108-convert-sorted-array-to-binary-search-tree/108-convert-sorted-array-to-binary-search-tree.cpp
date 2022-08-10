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

    TreeNode* makeBST(vector<int>& nums, int start, int end) { 
        // if end > start, no elements left to makeBST
        if (start > end) { return nullptr; }

        // if start==end, we are left at the last element
        if (start == end) {
            TreeNode* newNode = new TreeNode(nums[start]);
            return newNode;
        }

        // calc mid
        int mid = (start + end) / 2;
        int val = nums[mid];
        TreeNode* left = makeBST(nums, start, mid - 1);
        TreeNode* right = makeBST(nums, mid + 1, end);

        // joining left and right node to the root.
        TreeNode* newNode = new TreeNode(val, left, right);

        return newNode;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums, 0, nums.size() - 1);
    }
};