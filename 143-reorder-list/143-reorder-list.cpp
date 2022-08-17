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
    ListNode* reorderMake(ListNode* head) {
        
        if(head->next == NULL){
            return head;
        }
        
        if(head->next->next != NULL){
            ListNode* last = head;
            ListNode* sec = head->next;
            while(last->next != NULL){
                last = last->next;
            }

            ListNode* cpy = sec;
            while(sec->next->next != NULL){
                sec = sec->next;
            }
            sec->next = NULL;


            last->next = reorderMake(cpy);

            head->next = last;
        }
        
        return head;
    }
    
    void reorderList(ListNode* head) {
        
        head =  reorderMake(head);
    }
};