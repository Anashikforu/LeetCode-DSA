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
        prev = curr
        
        for i in range(k):
            new_part = curr
            
            curr_size = limit
            if remaining_part > 0:
                remaining_part -= 1
                curr_size += 1
            
            j = 0
            while j < curr_size:
                prev = curr
                if curr is not None:
                    curr = curr.next
                j += 1
            
            if prev is not None:
                prev.next = None
            
            ans[i] = new_part
        
        
        return ans
                
        