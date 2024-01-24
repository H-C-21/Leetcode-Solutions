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
    

    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head){return head;}
        
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* curr = head;
        ListNode* start = newHead;
        bool rep = false;
        
        while(curr && curr->next){
            if(curr->val == curr->next->val){
                curr = curr->next;
                rep = true;
            } else {
                if(rep){
                start->next = curr->next;
                } else {
                start = curr;
                }
                rep = false;
                curr = curr->next;
            }
        }
        
        if(rep){
            start->next = NULL;
        }
        return newHead->next;
    }
};