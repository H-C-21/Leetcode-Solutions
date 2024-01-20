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
    
    ListNode* mergeList(ListNode *left, ListNode *right){
        
        ListNode* headl = left;
        ListNode* headr = right;
        
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
    
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }


    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;
        
       head = sortList(head);
        right = sortList(right);
        return mergeList(head,right);

    }
};