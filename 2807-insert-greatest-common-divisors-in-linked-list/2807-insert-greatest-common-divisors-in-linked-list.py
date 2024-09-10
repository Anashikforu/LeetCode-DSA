# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        curr = head
        
        while curr.next != None:
            
            temp = curr.next
            val1,val2 = curr.val, temp.val
            
            gcd = self.hcd (val1,val2)
            
            curr.next =  ListNode(gcd)
            curr.next.next = temp
            
            curr = temp
            
        return head
        
    def hcd(self,a,b):
        if b == 0:
            return a
        else:
            return self.hcd(b,a%b)