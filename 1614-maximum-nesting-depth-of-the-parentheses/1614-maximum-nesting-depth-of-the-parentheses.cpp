class Solution {
public:
    int maxDepth(string s) {
        string sub;
        int open = 0;
        int depth = 0;
        
        for(int i = 0 ;i<s.size(); i++){
            
            if(s[i] == '('){
                open++;
            } 
            if(s[i] == ')'){
                open--;
            }
            depth = max(open,depth);
            
        }
        
        return depth;
    }
};