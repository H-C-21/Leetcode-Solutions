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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1){return l2;}
        if(!l2){return l1;}
            
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        ListNode* prev = nullptr;
        
        while(temp && temp2){
            int num = temp->val+temp2->val;
            if(num<10){
                temp2->val = num;
                
            } else{
                temp2->val = num%10;
                if(temp->next){
                temp->next->val++;
                } else {
                    temp->next = new ListNode(1);
                }
            }
            
            if(temp2->next == NULL && temp->next != NULL){
                temp2->next = temp->next;
                while(temp2->next->val == 10){
                    temp2->next->val = 0;
                    if(temp2->next->next){
                    temp2->next->next->val++;
                    } else {
                    temp2->next->next = new ListNode(1);
                    }
                    temp2 = temp2->next;
                }
                break;
            }
            temp2 = temp2->next;
            temp = temp->next;
            
        }
     
        
        return l2;
        
    }
};