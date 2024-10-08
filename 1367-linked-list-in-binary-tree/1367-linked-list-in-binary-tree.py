# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubPath(self, head: Optional[ListNode], root: Optional[TreeNode]) -> bool:
        
        def dfs(node,head):
            
            if not head:
                return True
            if not node:
                return False
            result = False
            
            if node.val == head.val:
                result = dfs(node.left,head.next)
                result = result or dfs(node.right,head.next)
            
            return result
        
            
        
        if not root:
            return False
        
        result = dfs(root,head)
        result = result or self.isSubPath(head,root.left)
        result = result or self.isSubPath(head,root.right)
        
        return result
        
            
            
            
        