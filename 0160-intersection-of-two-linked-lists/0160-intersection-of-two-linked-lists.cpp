/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        ListNode* first = headA;
        ListNode* sec = headB;
        
        int len1=0;
        int len2=0;
        while(first->next != NULL){
            len1++;
            first = first->next;
        }
        
        while(sec->next != NULL){
            sec = sec->next;
            len2++;
        }
        
        ListNode* longer;
        ListNode* shorter;
        int diff;
        if(len2>len1){
            diff = len2-len1;
            longer = headB;
            shorter = headA;
        } else {
            diff = len1-len2;
            shorter = headB;
            longer = headA;
        }
        
        
        while(diff!=0){
            longer = longer->next;
            diff--;
        }
        
        while(shorter!=nullptr || longer!= nullptr){
            if(shorter == longer){
                return shorter;
            }
            shorter = shorter->next;
            longer = longer->next;
            
        }
        
        return NULL;
        
        
        
        
        
        
    
    }
};