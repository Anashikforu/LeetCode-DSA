/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA,*q = headB;
        
        if( p == NULL or q == NULL){
            return NULL;
        }
        
        while(p != q){
            p =p->next;
            q =q->next;
            
            if(p == q){
                return p;
            }
            
            if(p == NULL){
                p = headA;
            }
            
            if(q == NULL){
                q = headB;
            }
        }
        
        return p;
        
    }
};