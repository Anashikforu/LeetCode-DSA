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
        
        // if(headA == headB){ return headB;}
        
        while(headA){
            ListNode *checkB = headB;
            while(checkB){
                if(headA == checkB){
                    return checkB;
                }
                checkB = checkB->next;
            }
            headA = headA->next;
        }
        
        return NULL;
    }
};