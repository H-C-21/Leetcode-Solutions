class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> qw;
        vector<string> rec;
        string temp;
        
        int open = 0;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                open++;
                if(open > 1){
                    temp += '(';
                }
            } else{
                if(open > 1){
                temp += ')';
                }
                open--;
            }
        }
        
        return temp;
        
        
     
        
    }
};