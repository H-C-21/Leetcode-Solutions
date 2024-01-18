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
        
        if(n == 0){
            return head;
        }
        
        if(head->next == NULL){
            return NULL;    
        }
        
        ListNode* prev = nullptr;
     
        
        ListNode* curr = head;
        ListNode* actual = head;
        int count = 0;
        while(curr != NULL){
            curr = curr->next;
            count++;
            if(count>n){
                prev = actual;
                actual = actual->next;
            }
        }
        
        
        if(n != 1){
        actual->val = actual->next->val;
        actual->next = actual->next->next;
        } else {
            prev->next = NULL;
        }
        
        
        return head;
        
        
    }
};