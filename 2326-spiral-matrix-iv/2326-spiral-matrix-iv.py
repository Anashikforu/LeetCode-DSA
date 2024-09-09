# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
        
        res = [[-1]*n for _ in range(m)]
        i,j,x,y = 0,0,0,0
        direction = [[0,1],[1,0],[0,-1],[-1,0]]
        cur_dir = 0
        
        while head != None:
            # print(cur_dir, i , j, head.val)
            res[i][j] = head.val
            head = head.next
            
            if cur_dir == 0 and j == n-x-1:
                cur_dir = 1
            
            if cur_dir == 1 and i == m-y-1:
                cur_dir = 2
            
            if cur_dir == 2 and j == 0+x:
                cur_dir = 3
            
            if cur_dir == 3 and i == 0+y+1:
                # print("_______")
                x += 1
                y += 1
                cur_dir = 0
            
            i +=  direction[cur_dir][0]
            j +=  direction[cur_dir][1]
        
        return res
                
                
            
        