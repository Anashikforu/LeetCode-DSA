# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        
        ans = [None] * k
        
        length = 0
        curr = head
        
        while curr is not None:
            length += 1
            curr = curr.next
        
        limit = length//k 
        remaining_part = length%k 
        
        curr = head
        
        for i in range(k):
            new_part = ListNode(0)
            tail = new_part
            
            curr_size = limit
            if remaining_part > 0:
                remaining_part -= 1
                curr_size += 1
            
            for j in range(curr_size):
                tail.next = ListNode(curr.val)
                tail = tail.next
                curr = curr.next
            
            ans[i] = new_part.next
        
        
        return ans
                
        