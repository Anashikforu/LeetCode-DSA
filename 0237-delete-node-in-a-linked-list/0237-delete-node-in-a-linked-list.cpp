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
        
        node->next = next_p->next;
        next_p->next = nullptr;
        delete(next_p);
        
        // cout<<next_p->next->val<<endl;
    }
};