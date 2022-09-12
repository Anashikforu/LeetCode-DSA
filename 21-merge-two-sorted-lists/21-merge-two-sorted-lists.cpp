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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1){ return list2;}
        if(!list2){ return list1;}
        
        ListNode* mergelist=NULL,*last=NULL,*first=list1,*second=list2;
        
        while(first && second){
            ListNode* temp = NULL;
            if(first->val < second->val){
                temp = first;
                first = first->next;
            }else{
                temp = second;
                second = second->next;
            }
            
            if(temp){
                if(mergelist == NULL){
                    mergelist = temp;
                    last = mergelist;
                }else{
                    last->next = temp;
                    last = temp;
                }
            }
        }
        
        if(first)
                last->next = first;
        if(second)
                last->next = second;
        
        return mergelist;
        
    }
};