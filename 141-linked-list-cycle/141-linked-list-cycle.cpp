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
    bool hasCycle(ListNode *head) {
        ListNode *slow =head, *fast = head;
        
        if(head == NULL){return false;}
        
        // if(head == head-next){
        //     return true;
        // }
        
        while(fast->next and fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){ return true;}
        }
        
        return false;
    }
};