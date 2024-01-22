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

    ListNode* reverseList(ListNode* head, ListNode* end){
        ListNode* temp = head;
        ListNode*  prev = NULL;
        ListNode* ded;
        while(temp && temp != end){
            ded = temp;
            temp = temp->next;
            ded->next = prev;
            prev = ded;
        }

        if(temp){
        temp->next = prev;
        }

        return head;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head || !head->next){return head;}

        ListNode* curr = head;
        ListNode* start = new ListNode(0);
        ListNode* ans = start;
        start->next = head;
        ListNode* temp2;
        ListNode* temp;
        int aws = 1;

        while(curr){
            if(aws == k){
                temp = curr;
                temp2 = curr->next;
                ListNode* newt = reverseList(start->next,curr);
                newt->next = temp2;
                start->next = temp;
                curr = temp2;
                start = newt;
                aws = 1;
            } else {
                aws++;
                curr = curr->next;
            }        
        }
       
        return ans->next;

    }
};