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
        vector<int> numbers;
        
        while(head->next != NULL){
            numbers.push_back(head->val);
            head = head->next;
        }
        numbers.push_back(head->val);
        
        int num_size = numbers.size();
        
        for(auto a:numbers){
            cout<<a<<endl;
        }
        
        for(int i=0; i<num_size-1/2; i++){
            if(numbers[i] != numbers[num_size-1-i]){
                return false;
            }
        }
        
        return true;
    }
};