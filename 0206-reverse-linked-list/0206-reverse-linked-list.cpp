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

//Another Recursive Approach! Reach the end and then return the reversed head throughout the recursion stack!

class Solution {
public:
    
    ListNode* helper(ListNode* curr){
        if(curr == NULL || curr->next == NULL){
            
            return curr;
        }        
        ListNode* revhead = helper(curr->next);
            ListNode* right = curr->next;
            right->next = curr;
            curr->next = nullptr;
            return revhead;
    }
    
    ListNode* reverseList(ListNode* head) {
        
        return helper(head);
        
    }
};