/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){return NULL;}
        
        
        Node* curr = head;
        Node* temp;
        
        while(curr){
            temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        
        // return head;
        
        curr = head;
        
        while(curr){
            if(curr->random){
            curr->next->random = curr->random->next;
            
            }
            curr = curr->next->next;
        }
        
        
        Node* newList = new Node(0);
        Node* ans = newList;
        curr = head;
        
        while(curr){
            ans->next = curr->next;
            ans = ans->next;
            curr->next = curr->next->next;
            curr=curr->next;
        }
        
        
        return newList->next;
        
    };
        
        
};