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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* first = l1;
        
        int carry=0;
        
        while(l1 && l2){
            int sum = l1->val+l2->val + carry;
            carry = sum/10;
            sum %= 10;
            
            l1->val = sum;
            
            if(l1->next == NULL && l2->next){
                l1->next = new ListNode(0);
            }
            if(l1->next && l2->next == NULL){
                l2->next = new ListNode(0);
            }
            
            if(l1->next == NULL && l2->next == NULL && carry > 0){
                l1->next = new ListNode(carry);
            }
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        return first;
    }
};