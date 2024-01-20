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
        
        if(!list1){return list2;}
        if(!list2){return list1;}
        
        ListNode* head = list1;
        ListNode* head2 = list2;

        ListNode* newList = list1;
        

        if(head2->val < head->val){
            newList = head2;
            head2 = head2->next;
        } else {
            head = head->next;
        }
        ListNode* ans = newList;
    
        while(head !=NULL && head2 != NULL){
            if(head->val < head2->val){
                newList->next = head;
                head = head->next;
            } else {
                newList->next = head2;
                head2= head2->next;
            }

            newList = newList->next;
        }

    if(head){
        newList->next = head;
    }
    if(head2){
        newList->next = head2;
    }
        
    return ans;

            
        }
};