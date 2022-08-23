/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head->next == NULL){
            return true;
        }
        
        ListNode *slow =head,*fast =head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        ListNode *rev = NULL, *curr = slow->next, *temp;
        
        while(curr != NULL){
            temp = curr->next;
            curr->next = rev;
            rev = curr;
            curr = temp;
        }
        
        ListNode *p = head, *q= rev;
        
        while(p-> next != NULL){
            if(p->val != q->val){
                return false;
            }
            p = p->next;
            if(q->next == NULL){
                q = p;
            }else{
                q = q->next;
            }
        }
        
        return true;
    }
};