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
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
        vector<int> str;
        
        while(slow != nullptr){
            str.push_back(slow->val);
            slow = slow->next;
        }
        
        int mid = (str.size()+1)/2;
        int size = str.size();
            for(int i=0;i<mid;i++){
                
                cout<<str[str.size()-i-1]<<endl;
                if(str[i] != str[size-i-1]){
                    return false;
                }
                
            }
        
        return true;
        }
        
        
        
    
};