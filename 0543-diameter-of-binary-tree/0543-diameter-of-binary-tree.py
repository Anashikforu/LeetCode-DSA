# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        
        self.diameter = 0
        
        def highestdiameterOfBinaryTree(root):
            if not root:
                return 0
            
            lh = highestdiameterOfBinaryTree(root.left)
            
            rh = highestdiameterOfBinaryTree(root.right)
            
            self.diameter = max(self.diameter,lh+rh)
            
            return max(lh,rh)+1
        
        highestdiameterOfBinaryTree(root)
        
        return self.diameter