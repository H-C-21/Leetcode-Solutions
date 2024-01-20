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
        
        ListNode* left = list1;
        ListNode* right = list2;
        
        ListNode* merged = new ListNode(-1);
        ListNode* ans = merged;
        
        while(left != NULL && right != NULL){
                if(left->val>right->val){
                    merged->next = right;
                    
                    right = right->next;        
                } else {
                    merged->next = left;
                    left = left->next;
                }
            
            merged = merged->next;
            
        }
        
        if(left){
        merged->next = left;
        }
        if(right){
            merged->next = right;
        }
        
        
        return ans->next;

            
        }
};