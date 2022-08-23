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
    bool helper(ListNode **front, ListNode *back){
        
        if(back == NULL){
            return true;
        }
        
        bool equal_so_far = helper(front,back->next);
        
        bool value_equal = ((*front)->val == back->val);
        
        *front = (*front)->next;
        
        return equal_so_far && value_equal;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode *front = head;
        
        return helper(&front , head);
    }
};