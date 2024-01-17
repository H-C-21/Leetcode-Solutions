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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* temp = head;
        set<ListNode*> visited;      
        
        while(temp){
            if(visited.find(temp) == visited.end()){
            visited.insert(temp);
                temp = temp->next;
            }
            else{
                return temp;
            }
            
        }
        
        return nullptr;
        
    }
};