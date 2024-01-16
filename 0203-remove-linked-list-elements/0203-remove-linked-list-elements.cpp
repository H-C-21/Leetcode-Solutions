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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* prev = nullptr;
        if(head == NULL){
            return head;
        }
         while(head!=nullptr && head->val==val){
            head = head->next;
        }
        
        ListNode* temp = head;
        
        
        while(temp != nullptr){
            cout<<temp->val<<endl;
            if(temp->val == val){
                prev->next = temp->next;
            } else {
                prev = temp;
            }
            
            
            temp = temp->next;
        }
        
        
        // if(head->val == val){
        //    head = head->next;   
        // }
        
        return head;
    }
};