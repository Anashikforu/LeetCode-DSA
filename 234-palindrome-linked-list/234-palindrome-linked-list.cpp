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
        ListNode* fast= head, *slow = head;
        
        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        
        ListNode* curr= slow;
        ListNode* prev= NULL;
        ListNode* next_p= NULL;
        
        while(curr){
            next_p = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next_p;
        }
        
        slow = prev;
        while(slow->next){
            if(head->val != slow->val){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        
        return true;
    }
};