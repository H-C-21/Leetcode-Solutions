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
    
    ListNode* helper(ListNode* curr, ListNode* prev){
        if(curr != nullptr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
           return helper(temp, prev);
        }
        
        return prev;
        
    }
    
    ListNode* reverseList(ListNode* head) {
        
        return helper(head,nullptr);
        
    }
};