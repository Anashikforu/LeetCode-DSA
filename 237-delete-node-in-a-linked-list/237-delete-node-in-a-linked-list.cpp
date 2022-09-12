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
    void deleteNode(ListNode* node) {
        ListNode* next_p = node->next;
        node->val = next_p->val;
        
        ListNode* prev = next_p->next;
        node->next = prev;
        
        // cout<<next_p->next->val<<endl;
    }
};