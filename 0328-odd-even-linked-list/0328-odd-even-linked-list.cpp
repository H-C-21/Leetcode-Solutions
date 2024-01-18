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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return head;
        }
        
        ListNode* start = head->next;
       
        ListNode* odd = head;
        ListNode* even = head->next;
        
        ListNode* temp;
        
        while((odd->next != NULL && odd != NULL) && (even->next != NULL && even != NULL)){
            
            temp = even;
            even = even->next->next;
            
            
            ListNode* oddtemp = odd;
            odd = odd->next->next;
            
            temp->next = even;
            oddtemp->next = odd;
            
        }
        
        
        odd->next = start;
        
            return head;
        
    }
};