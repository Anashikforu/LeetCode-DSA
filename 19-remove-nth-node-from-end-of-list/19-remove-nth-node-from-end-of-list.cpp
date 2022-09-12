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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL||(head->next == NULL && n == 1)){
            return NULL;
        }
        
        ListNode* temp= head;
        int step=0;
        
        while(temp){
            step++;
            temp = temp->next;
        }
        
        step -= n;
        
        ListNode* res= head;
        
        if(step == 0){
            return res->next;
        }
        
        while(step > 1){
            res = res->next;
            step--;
        }
        
        if(res->next->next){
            ListNode* temp= res->next->next;
            res->next = temp;
        }else{
            res->next = NULL;
        }
        
        return head;
    }
};