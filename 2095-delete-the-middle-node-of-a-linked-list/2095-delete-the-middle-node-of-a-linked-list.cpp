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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next == NULL){
            return NULL;
        }
        
        vector<int> vals;
        ListNode* cpy = head;
        ListNode* result = head;
        
        vals.push_back(cpy->val);
        while(cpy->next != NULL){
            vals.push_back(cpy->val);
            cpy = cpy->next;
        }
        
        int mid_size = vals.size()/2;;
        
        // cout<<vals.size()<<" "<<mid_size<<" "<<vals[mid_size]<<endl;
        int p =1;
        while(p < mid_size){
            result = result->next;
            p++;
        }
        // cout<<p<<endl;
        ListNode* nextH;
        if(result->next->next != NULL){
            nextH = result->next->next;
            result->next = nextH;
        }else{
            result->next = NULL;
        }
        
        
        return head;
    }
};