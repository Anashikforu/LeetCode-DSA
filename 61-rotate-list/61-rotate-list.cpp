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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head or !head->next or k == 0){
            return head;
        }
        
        ListNode* rotate = head;
        int rotate_size = 0;
        
        while(rotate){
            rotate = rotate->next;
            rotate_size++;
        }
        
        if(k>= rotate_size){
            k %= rotate_size;
        }
        
        if( k == 0){
            return head;
        }
        
        rotate_size -= k;
        
        rotate = head;
        
        while(rotate && rotate_size>1){
            rotate_size--;
            rotate = rotate->next;
        }
        
        ListNode* result = rotate->next;
        ListNode* temp = result;
        rotate->next = NULL;
        
        while(temp->next){
            temp = temp->next;
        }
        
        temp->next = head;
        
        return result;
        
    }
};